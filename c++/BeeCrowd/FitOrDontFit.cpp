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
        int sa = a.size();
        int ba = b.size();
        int da = sa - ba;
        a.erase(0,da);
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
        if(ok==b.size()) cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;
    }
}

// a er samne theke remove korte hobe
