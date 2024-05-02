#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a,r="",t="";
    cin>>a;
    for(int i = 0 ; i<a.size(); i++){
        if(a[i]=='G'){
            r+='G';
        }else if(a[i]=='('){
            t = t+a[i];
        }
        else if(a[i]==')'){
            t=t+a[i];
            if(t=="()"){
                r=r+"o";
            }
            t="";
            
        }
        else if(a[i]=='a'){
            r=r+"al";
            t="";
        }
    }
    cout<<r<<endl;
}