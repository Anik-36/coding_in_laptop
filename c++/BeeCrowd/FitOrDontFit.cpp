#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        int ok = 0;
        if(a>=b){
            for(int i = b.size()-1; i>=0; i--){
                if(a[i]==b[i]){
                    ok++;
                }else{
                    ok = 0;
                    break;
                }
            }
        }
        if(ok==b.size()) cout<<"encaxia"<<endl;
        else cout<<"nao encaxia"<<endl;
    }
}

// a er samne theke remove korte hobe
