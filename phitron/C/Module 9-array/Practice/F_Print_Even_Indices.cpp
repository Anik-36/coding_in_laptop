#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void print(int* a,int i){
    if(i<0) return ;
    if(i%2==0){
        cout<<a[i]<<" ";
    }
    print(a,i-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    print(a,n-1);
}