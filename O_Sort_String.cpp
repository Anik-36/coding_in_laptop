#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n; cin>>n;
    string s;
    cin>>s;
    for(int i =  0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[j]<s[i]){
                swap(s[j],s[i]);
            }
        }
    }
    
    //sort(s.begin(),s.end());
    cout<<s<<endl;
}