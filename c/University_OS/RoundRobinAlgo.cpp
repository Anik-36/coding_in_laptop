#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int bt[100],tq,i,n,rembt[100],t=0,wt[100],c = 0, p[100],tat[100], current = 0;
    double totaltat = 0, totalwt = 0;
    cout<<"Input process number : "<<endl;
    cin>>n;
    for(i = 0; i<n; i++){
        cout<<"Input burst time for process P["<<i+1<<"] : ";
        cin>>bt[i];
        p[i]= i+1;
    }
    cout<<"Take Input time quantum : "<<endl;
    cin>>tq;
    for(i = 0 ; i<n; i++){
        rembt[i] = bt[i];
    }
    while(c<n){
        for(i = 0; i<n; i++){
            if(rembt[i]>0){
                if(rembt[i]<=tq){
                    current+=rembt[i];
                    rembt[i] = 0;
                    tat[i] = current;
                    wt[i ] = tat[i] - bt[i];
                    c++;
                }else{
                    rembt[i]-=tq;
                    current +=tq;
                }
            }
        }
    }

    cout<<endl<<"Process\t  Burst Time   \tWaiting Time\tTurnaround Time";
    for(i = 0 ; i<n; i++){
        cout<<endl<<"P["<<p[i]<<"]\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
        totalwt +=wt[i];
        totaltat +=tat[i];
    }

    cout<<endl<<endl<<"Average waiting time : "<<fixed<<setprecision(2)<<totalwt/n<<endl;
    cout<<"Average turn around time : "<<fixed<<setprecision(2)<<totaltat/n<<endl;
}