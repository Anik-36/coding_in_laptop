#include <stdio.h>
void main(){
    int i, n, j, temp, bt[100], wt[100], tat[100], p[100];
    float awt = 0, atat = 0;
    printf("Shortest Job First Scheduling Non-Primitive(Simultaneous Arrival)\n");
    printf("Enter the No.of processes :");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter the burst time of %d process :", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }
    for (i = 0; i < n; i++){
         for (j = i + 1; j < n; j++){
            if (bt[i] > bt[j]){
                temp = bt[j];
                bt[j] = bt[i];
                bt[i] = temp;
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    wt[0] = 0;
    tat[0] = bt[0];
    for (i = 1; i < n; i++){
        wt[i] = bt[i - 1] + wt[i - 1];
        awt = awt + wt[i];
        tat[i] = tat[i - 1] + bt[i];
        atat = atat + tat[i];
    }
    atat = atat + tat[0];
    atat = atat / n;
    awt = awt / n;
    printf("Process\tB.T\tT.A.T\tW.T\n");
    for (i = 0; i < n; i++){
        printf("P[%d]\t%3d\t%3d\t%4d\n", p[i], bt[i], tat[i], wt[i]);
    }
    printf("Average Waiting Time:%0.3f\nAverage Turn Around Time:%0.3f", awt, atat);
}