#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b = 0;
        cin>>a;
       int sz = 26;
       string mins = "zzz" , cur;
       for(int i = 1 ; i<=sz ; i++){
        for(int j = 1 ; j<=sz ; j++){
            for(int k =1 ; k<=sz ; k++){
                if(i+j+k ==a){
                    cur += char(i+96);
                    cur += char(j+96);
                    cur += char(k+96);
                    mins = min(mins,cur);
                }
            }
        }
       }
       cout<<mins<<endl;
    }
}