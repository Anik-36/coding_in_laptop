#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of process : ";
    cin>>n;
    int p[n+1];
    int at[n],bt[n],ct[n],tat[n],wt[n];
    float atat = 0 ,awt = 0;
    cout<<"Enter the arrival time and burst time of the processes : "<<endl;
    for(int i = 0 ; i<n; i++){
        cout<<"P["<<i+1<<"]";
        cin>>at[i]>>bt[i];
        p[i] = i+1;
    }

    for(int i = 0 ; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(at[j]>at[j+1]){
                int temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;

                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;

                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    int current = 0;
    for(int i = 0 ; i<n; i++){
        if(current<at[i]){
            current = at[i];
        }
        ct[i] = current + bt[i];
        current = ct[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        atat +=tat[i];
        awt += wt[i];
    }

    atat /=n;
    awt /= n;
    cout<<"Process \tArrival Time \tBurst Time\tCompletion Time\tTurnaround Time\t\tWaiting Time"<<endl;
    for(int i = 0 ; i<n; i++){
        cout<<"P"<<p[i]<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t\t"<<wt[i]<<endl;
    }

    cout<<"Average Waiting Time : "<<awt<<endl;
    cout<<"Average Turnaround Time : "<<atat<<endl;
}