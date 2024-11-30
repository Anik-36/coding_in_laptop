#include <stdio.h>
int main()
{
    int i, n, j, temp;
    int bt[100], at[100], wt[100], tat[100], ct[100], p[100];
    float awt = 0, atat = 0;
    printf("Shortest Job First Scheduling Non-Preemptive\n");
    printf("===========================================\n");
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the arrival time of process %d: ", i + 1);
        scanf("%d", &at[i]);
        printf("Enter the burst time of process %d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }
    // Sorting processes by arrival time, then by burst time
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (at[i] > at[j] || (at[i] == at[j] && bt[i] > bt[j]))
            {
                // Swap arrival time
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
                // Swap burst time
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                // Swap process ID
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    int current_time = 0;

    for (i = 0; i < n; i++)
    {
        if (current_time < at[i])
        {
            current_time = at[i];
        }

        wt[i] = current_time - at[i];
        if (wt[i] < 0)
            wt[i] = 0;

        current_time += bt[i];
        ct[i] = current_time;
        tat[i] = ct[i] - at[i];

        awt += wt[i];
        atat += tat[i];
    }

    // Calculate averages
    awt /= n;
    atat /= n;

    // Display the results
    printf("\nProcess\tArrival\tBurst\tCompletion\tWaiting\tTurnaround\n");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]\t%d\t%d\t%d\t\t%d\t%d\n", p[i], at[i], bt[i], ct[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time: %.2f\n", awt);
    printf("Average Turnaround Time: %.2f\n", atat);

    return 0;
}













// #include <stdio.h>

// int main() {
//     int n, i, j;

//     // Input the number of processes
//     printf("Enter the number of processes: ");
//     scanf("%d", &n);

//     int id[n], arrival[n], burst[n], waiting[n], turnaround[n], completion[n];
//     int done[n]; // Array to keep track of completed processes

//     // Input arrival and burst times
//     for (i = 0; i < n; i++) {
//         id[i] = i + 1; // Assign process IDs
//         printf("Enter arrival time and burst time for process %d: ", id[i]);
//         scanf("%d %d", &arrival[i], &burst[i]);
//         done[i] = 0; // Mark all processes as not done
//     }

//     int currentTime = 0, completed = 0;
//     while (completed < n) {
//         int shortest = -1;

//         // Find the process with the shortest burst time that has arrived
//         for (i = 0; i < n; i++) {
//             if (arrival[i] <= currentTime && !done[i]) {
//                 if (shortest == -1 || burst[i] < burst[shortest]) {
//                     shortest = i;
//                 }
//             }
//         }

//         if (shortest != -1) {
//             // Execute the selected process
//             currentTime += burst[shortest];
//             completion[shortest] = currentTime;
//             turnaround[shortest] = completion[shortest] - arrival[shortest];
//             waiting[shortest] = turnaround[shortest] - burst[shortest];
//             done[shortest] = 1; // Mark process as completed
//             completed++;
//         } else {
//             currentTime++; // No process available, increase current time
//         }
//     }

//     // Print results
//     printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
//     int totalWT = 0, totalTAT = 0;
//     for (i = 0; i < n; i++) {
//         totalWT += waiting[i];
//         totalTAT += turnaround[i];
//         printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
//                id[i], arrival[i], burst[i], completion[i], turnaround[i], waiting[i]);
//     }

//     // Print average waiting and turnaround times
//     printf("\nAverage Turnaround Time: %.2f\n", (float)totalTAT / n);
//     printf("Average Waiting Time: %.2f\n", (float)totalWT / n);

//     return 0;
// }
