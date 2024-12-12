#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int bt[100],tq,i,n,rembt[100],t=0,wt[100],c = 0, p[100],tat[100];
    double total = 0, avgwt = 0;
    cout<<"Input process number : "<<endl;
    cin>>n;
    for(i = 0; i<n; i++){
        cout<<"Input burst time for process P["<<i+1<<"]";
        cin>>bt[i];
        p[i]= i+1;
    }
    cout<<"Take Input time quantum : "<<endl;
    cin>>tq;
    for(i = 0 ; i<n; i++){
        rembt[i] = bt[i];
    }
    while(c!=n){
        for(i = 0; i<n; i++){
            if(rembt[i]>tq){
                t = t +tq;
                rembt[i] = rembt[i] - tq;
            }else if(rembt[i]!=0){
                t = t+rembt[i];
                wt[i] = t - bt[i];
                tat[i] = t;
                total = total + wt[i];
                rembt[i] = 0;
                c++;
            }
        }
    }
    avgwt = total/n;
    cout<<endl<<"Process\t  Burst Time   \tWaiting Time\tTurnaround Time";
    for(i = 0 ; i<n; i++){
        total = total+bt[i];
        cout<<endl<<"P["<<p[i]<<"]\t\t"<<bt[i]<<"\t\t\t\t"<<wt[i]<<"\t\t\t\t"<<tat[i];
    }
    double avgtt = total/n;
    cout<<endl<<endl<<"Average waiting time : "<<fixed<<setprecision(2)<<avgwt<<endl;
    cout<<"Average turn around time : "<<fixed<<setprecision(2)<<avgtt<<endl;
}