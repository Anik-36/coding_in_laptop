#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ReadyQueue[100];                 // Array to store requests
    int n, i, initial, TotalHeadMov = 0; // Variables for number of requests, loop counter, initial position, and total movement

    // Read the number of requests
    printf("Enter the number of requests: ");
    scanf("%d", &n);

    // Read the sequence of requests
    printf("Enter the request sequence:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ReadyQueue[i]);
    }

    // Read the initial head position
    printf("Enter the initial head position: ");
    scanf("%d", &initial);

    // Calculate total head movement
    for (i = 0; i < n; i++)
    {
        TotalHeadMov += abs(ReadyQueue[i] - initial); // Add the absolute difference
        initial = ReadyQueue[i];                      // Update the current head position
    }

    // Print the result
    printf("Total Head Movement = %d\n", TotalHeadMov);

    return 0;
}
