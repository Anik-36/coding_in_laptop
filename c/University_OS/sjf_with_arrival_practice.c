#include<stdio.h>
int main(){
    int i , j , n, temp;
    int at[100], bt[100], ct[100], tat[100],wt[100],p[100];
    float awt = 0 , atat = 0;
    printf("enter the number of process : ");
    scanf("%d",&n);
    for(i = 0 ; i<n; i++){
        printf("enter the arrival time of process : %d",i+1);
        scanf("%d",&a[i]);
        printf("enter the burst time of process : %d",i+1);
        scanf("%d",&b[i]);
        p[i] = i+1;
    }
    for(i = 0; i<n; i++){
        for(j = i +1; j<n; j++){
            if((a[i]>a[j]) || ((a[i]==a[j]) && b[i]>b[j])){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                temp = b[i] ;
                b[i] = b[j];
                b[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    int current_time = 0;
    for(i= 0 ; i<n; i++){
        if(current_time<a[i]){
            current_time =a[i];
        }
        wt[i] = current_time - a[i];
        if(wt[i] <0)
            wt[i]  = 0;

        current_time+=b[i];
        ct[i] = current_time;
        tat[i]= ct[i] - at[i];
        awt += wt[i];
        atat += tat[i];
    }
    awt/=n;
    atat/=n;

    return 0;
}