#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a, b;
    int t = 0;
    int ht = -1;

    while(n--){
        cin>>a>>b;
        //cout<<a<<b<<endl;
        t = t+b-a;
            ht = max(ht,t);
    }
    cout<<ht<<endl;
}