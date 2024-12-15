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
        int  n = a.size();
        for(int i = n-1,j =0 ; i<=0; i--, j++){

            if(a[i]=='p'){
                a[j] = 'q';
            }else if(a[i] == 'q'){
                a[j] = 'p';
            }
        }
        cout<<a<<endl;
    }
}