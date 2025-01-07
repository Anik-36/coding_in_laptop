#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void maxi(int* x, int* y){
    int temp = *x;
    *x = *y ;
    *y = temp;
}
int main(){
    int t, n, m ;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>m){
            maxi(&n,&m);
        }
        int sum = 0;
        for(int i = n+1 ; i<m ; i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}