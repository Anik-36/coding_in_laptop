#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, total_seek_time = 0;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    int requests[n], visited[n];

    printf("Enter requests: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
        visited[i] = 0;
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("\nExecution Order: %d", head);

    for (int completed = 0; completed < n; completed++) {
        int min_distance = 1e9, next_request = -1;
        for (int i = 0; i < n; i++) {
            if (!visited[i] && abs(requests[i] - head) < min_distance) {
                min_distance = abs(requests[i] - head);
                next_request = i;
            }
        }
        visited[next_request] = 1;
        total_seek_time += min_distance;
        head = requests[next_request];
        printf(" -> %d", head);
    }

    printf("\n\nTotal seek time: %d\n", total_seek_time);
    printf("Average seek time: %.2f\n", (float)total_seek_time / n);

    return 0;
}
