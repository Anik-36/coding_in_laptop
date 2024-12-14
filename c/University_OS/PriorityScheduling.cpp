// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total = 0 , pos, temp,avg_wt,avg_tat;
//     cout<<"Enter the nubmer of Process : ";
//     cin>>n;
//     cout<<endl<<"Enter Burst Time and Priority"<<endl;
//     for(i = 0; i<n; i++){
//         cout<<endl<<"P["<<i+1<<"]"<<endl;
//         cout<<"Burst Time : ";
//         cin>>bt[i];
//         cout<<"Priority : ";
//         cin>>pr[i];
//         p[i] = i+1;
//     }

//     for(i = 0 ; i<n; i++){
//         for(j = i+1; j<n; j++){
//             if(pr[j]<pr[i]){
//                 temp = pr[i];
//                 pr[i] = pr[j];
//                 pr[j] = temp;

//                 temp = bt[i];
//                 bt[i] =bt[j];
//                 bt[j] =temp;

//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] =temp;
//             }
//         }
//     }

//     wt[0] = 0;

//     for(i=1 ; i<n; i++){
//         wt[i] = wt[i-1] + bt[i-1];
//         total+=wt[i];
//     }

//     avg_wt = total/n;
//     total = 0;

//     cout<<endl<<"Process\t  Burst Time    \tWaiting Time\tTurnaround Time";
//     for(i = 0 ; i<n; i++){
//         tat[i] = bt[i] + wt[i];
//         total+=tat[i];
//         cout<<endl<<"P["<<p[i]<<"]\t\t  "<<bt[i]<<"\t\t"<<wt[i]<<"\t\t\t"<<tat[i];
//     }

//     avg_tat = total/n;
//     cout<<endl<<endl<<"Average Waiting Time = "<<avg_wt;
//     cout<<endl<<"Average Turnaround Time = "<<avg_tat;
// }






#include <stdio.h>

int main()
{
    int bt[20], p[20], wt[20], tat[20], pr[20], i, j, n;
    float total_wt = 0, total_tat = 0, avg_wt, avg_tat;

    printf("Enter Total Number of Processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Burst Time of Process P[%d]: ", i + 1);
        scanf("%d", &bt[i]);
        printf("Enter Priority of Process P[%d]: ", i + 1);
        scanf("%d", &pr[i]);
        p[i] = i + 1; // Assign Process ID
    }


    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[i])
            {
                // Swap Priority
                int temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;

                // Swap Burst Time
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                // Swap Process ID
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }


    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
        total_wt += wt[i];
    }

    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        total_tat += tat[i];
}
avg_wt = total_wt / n;
avg_tat = total_tat / n;
printf("\n-------------------------------------------------------------------");
printf("\n| Process | Burst Time | Priority | Waiting Time | Turnaround Time |");
printf("\n--------------------------------------------------------------------");
for (i = 0; i < n; i++)
{
printf("\n|   P[%d]\t|\t%d\t|\t%d\t  |\t  %d\t  |\t  %d\t   |",p[i], bt[i], pr[i], wt[i], tat[i]);
}
printf("\n---------------------------------------------------------------------");
printf("\n\nAverage Waiting Time: %.2f", avg_wt);
printf("\nAverage Turnaround Time: %.2f\n", avg_tat);
return 0;
}