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
        string a;
        cin>>a;
        int n = a.size();
        for(int i = 0; i<n-1; i++){
            if(a[i]=='u' and i==n-2){
                if(a[i+1]=='s'){
                    a.pop_back();
                    a.pop_back();
                    a.push_back('i');
                }
            }
        }
        cout<<a<<endl;
    }
}