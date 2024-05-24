#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , ct = 0;
    int a[510] = {0};
    cin>>n;
    for(int i = 1; i<=510; i++){
        a[i] = (i*(i+1))/2;
        if(a[i]==n){
            ct++;
        }
    }
    if(ct!=0) yes
    else no
}