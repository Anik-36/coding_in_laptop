#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin >> n;
    n++;
    int a[4];
    while(n){
        int tmp = n;
        for(int i=0;i<4;i++){
            a[i] = tmp % 10;
            tmp /= 10;
        }
        int fre[10] = {0};
        bool ok = true;
        for(int i=0;i<4;i++){
            fre[a[i]]++;
            if(fre[a[i]] > 1){
                n++;
                ok = false;
                break;
            }
        }
        if(ok){
            cout << n << endl;
            return 0;
        }
    }
}