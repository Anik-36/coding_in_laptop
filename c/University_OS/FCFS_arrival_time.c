#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], completion_time[n], turnaround_time[n],
        waiting_time[n];

    // Input process details
    for (int i = 0; i < n; i++)
    {
        printf("Enter arrival time and burst time for process P%d: ", i + 1);
        scanf("%d %d", &arrival_time[i], &burst_time[i]);
    }

    // Sort processes by arrival time
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrival_time[j] > arrival_time[j + 1])
            {
                int temp;

                temp = arrival_time[j];
                arrival_time[j] = arrival_time[j + 1];
                arrival_time[j + 1] = temp;

                temp = burst_time[j];
                burst_time[j] = burst_time[j + 1];
                burst_time[j + 1] = temp;
            }
        }
    }

    int current_time = 0;

    // Calculate completion, turnaround, and waiting times
    for (int i = 0; i < n; i++)
    {
        if (current_time < arrival_time[i])
        {
            current_time = arrival_time[i];
        }
        completion_time[i] = current_time + burst_time[i];
        current_time = completion_time[i];
        turnaround_time[i] = completion_time[i] - arrival_time[i];
        waiting_time[i] = turnaround_time[i] - burst_time[i];
    }
    float total_turnaround_time = 0, total_waiting_time = 0;
    // Print process details
    printf("\nProcess Details:\n");
    printf("Process\tArrival\t   Burst\tCompletion\tTurnaround\tWaiting\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d\t\t\t%d\t\t%d\t\t\t%d\t\t\t%d\t\t  %d\n", i + 1, arrival_time[i],
               burst_time[i], completion_time[i], turnaround_time[i], waiting_time[i]);
        total_turnaround_time += turnaround_time[i];
        total_waiting_time += waiting_time[i];
    }
    printf("Average Waiting Time: %.2f\n", total_waiting_time / n);
    printf("\nAverage Turnaround Time: %.2f\n", total_turnaround_time / n);
    return 0;
}