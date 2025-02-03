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
        string s,x;
        cin>>s>>x;
        int k ;
        bool flag = false;
        for(int i = 0; i<s.size(); i++){
            if(s[i]==x[0]){
                k = i;
                for(int j = 0; j<x.size(); j++){
                    if(s[k]!=x[j]){
                        flag = false;
                        break;
                    }else{
                        flag = true;
                    }
                    k++;
                }
                if(flag == true){
                    s.replace(i,x.size(),"$");
                }
            }
        }
        cout<<s<<endl;
    }
}