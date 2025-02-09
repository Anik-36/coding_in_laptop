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
        bool flag = false;
        int n = a.size();
        for(int i = 0; i<n-1; i++){
            if(a[i]== a[i+1]){
                flag = true;
            }
        }
        if(flag == true){
            cout<<"1"<<endl;
        }else{
            cout<<n<<endl;
        }
    }
}