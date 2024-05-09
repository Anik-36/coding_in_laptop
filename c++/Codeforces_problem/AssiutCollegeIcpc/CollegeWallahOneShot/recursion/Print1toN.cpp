#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void print(int x, int n){
    if(x>n) return;
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cout<<"Enter the number of n : ";
    cin>>n;
    print(1,n);
}