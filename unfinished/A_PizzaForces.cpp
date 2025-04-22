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
        ll p;
        cin>>p;
        if(p<=6) cout<<"15"<<endl;
        else if(p>6 and p<=8) cout<<"20"<<endl;
        else if(p>8 and p<=10) cout<<"25"<<endl;
        else{
            ll ds = p/6;
            if(p%6!=0) ds++;
            ll s = ds*15;
            ll dm = p/8;
            if(p%8!=0) dm++;
            ll m = dm*20;
            ll dl = p/10;
            if(p%10!=0) dl++;
            ll l = dl*25;
            if(s<=m and s<=l) cout<<s<<endl;
            else if(m<=s and m<=l) cout<<m<<endl;
            else if(l<=s and l<=m) cout<<l<<endl;
        }
    }
}