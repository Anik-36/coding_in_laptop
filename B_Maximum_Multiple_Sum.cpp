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
        int a;
        cin>>a;
        int r[101] = {0};
        int sum = 0;
        int m = 1 , mx = INT_MIN;
        for(int i = 2 ; i<=a; i++){
            int n = 0;
            for(int j = 1; n<=a; j++){
                m = j*i;
                sum = sum + m;
                n = (j+1)*i;
            }
            r[i] = sum;
            mx = max(mx,sum);
            sum = 0;
        }
        for(int i = 2; i<101; i++){
            if(r[i] == mx){
                cout<<i<<endl;
                break;
            }
        }
    }
}