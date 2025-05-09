#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    string c = "codeforces";
    while(n--){
        cin>>s;
        int it = 0;
        for(int j = 0; j<10; j++){
            if(s[j]!=c[j]){
                it++;
            }
        }
        cout<<it<<endl;
    }
}