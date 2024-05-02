#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void print(int a){
    if(a==0) return;
    cout<<a<<endl;
    print(a-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}