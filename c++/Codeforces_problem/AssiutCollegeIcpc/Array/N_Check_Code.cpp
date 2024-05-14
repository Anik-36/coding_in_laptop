#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int n = a+b+1;
    string s;
    cin>>s;
    int ct = 0;
    if(s[a]=='-'){
        for(int i = 0; i<n; i++){
            if(i == a){
                i++;
            }
            if( s[i]>='0' && s[i]<='9'){
                ct++;
            }
            else{
                ct = 0;
                break;
            }
        }
    }
    if(ct == 0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}