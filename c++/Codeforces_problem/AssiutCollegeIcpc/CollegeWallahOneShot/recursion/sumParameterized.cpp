#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void sum(int n , int s){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    sum(n,0);
}