#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i = 0 ; i<n; i++){
        cin>>s[i];
    }
    int count = 0 ;
    for(int i = 0; i<(n/2); i++){
        if(s[i] != s[n-1-i]){
            count++;
        }
    }
    if(count == 0){ 
        yes;
    }
    else {
        no;
    }
}