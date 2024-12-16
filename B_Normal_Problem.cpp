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
        // string b;
        char b[n];
        for(int i = n-1,j =0 ; i>=0, j<n; i--, j++){

            if(a[i]=='p'){
                b[j] = 'q';
            }else if(a[i] == 'q'){
                b[j] = 'p';
            }else {
                b[j] = 'w';
            }
        }
        b[n] = '\0';
        cout<<b<<endl;
    }
}