#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, m, ans, r, num = 0, count = 0;
    cin>>n>>m;
    for(int i=n; i<=m; i++){
        int q = i;
        ans = 1;
        while(q!=0){
            r = q%10;
            q = q/10;
            if(r!=4 and r!=7){
                ans = 0;
                break;
            }
        }
        if(ans ==1){
            count=1;
            cout<<i<<" ";
        }
    }if(count ==0){
        cout<<-1<<endl;
    }
}