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
        int l, count = 0;
        string a="Timur";
        sort(a.begin(),a.end());
        cin>>l;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(l==5){
            for(int i=0 ; i<l ; i++){
                if(s[i]==a[i]) {
                    count ++;
                }
                else {
                    count = 0;
                }
            }
        }
        if(count==5) yes
        else no
    }
}