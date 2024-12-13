
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, head, direction, size, requests[50], total_movement = 0;

    // Input disk details
    printf("Enter the number of requests: ");
    scanf("%d", &n);

    printf("Enter the disk size: ");
    scanf("%d", &size);

    printf("Enter the request sequence: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &requests[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    printf("Enter direction (0 for down, 1 for up): ");
    scanf("%d", &direction);

    // Sort the request array
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (requests[i] > requests[j])
            {
                int temp = requests[i];
                requests[i] = requests[j];
                requests[j] = temp;
            }
        }
    }

    // SCAN Logic
    printf("Sequence of movement: %d", head);

    if (direction == 1)
    { // Moving up
        for (i = 0; i < n; i++)
        {
            if (requests[i] >= head)
            {
                total_movement += abs(requests[i] - head);
                head = requests[i];
                printf(" -> %d", head);
            }
        }
        if (head != size - 1)
        { // Move to the end of the disk
            total_movement += abs(size - 1 - head);
            head = size - 1;
            printf(" -> %d", head);
        }
        for (i = n - 1; i >= 0; i--)
        { // Moving back down
            if (requests[i] < head)
            {
                total_movement += abs(requests[i] - head);
                head = requests[i];
                printf(" -> %d", head);
            }
        }
    }
    else
    { // Moving down
        for (i = n - 1; i >= 0; i--)
        {
            if (requests[i] <= head)
            {
                total_movement += abs(requests[i] - head);
                head = requests[i];
                printf(" -> %d", head);
            }
        }
        if (head != 0)
        { // Move to the start of the disk
            total_movement += abs(head - 0);
            head = 0;
            printf(" -> %d", head);
        }
        for (i = 0; i < n; i++)
        { // Moving back up
            if (requests[i] > head)
            {
                total_movement += abs(requests[i] - head);
                head = requests[i];
                printf(" -> %d", head);
            }
        }
    }

    // Output total head movement
    printf("\nTotal head movement = %d\n", total_movement);

    return 0;
}
