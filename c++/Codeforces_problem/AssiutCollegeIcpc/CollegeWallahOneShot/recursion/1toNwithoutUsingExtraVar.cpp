#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void print(int a){
    if(a==0) return;
    print(a-1);
    cout<<a<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    print(n);
}