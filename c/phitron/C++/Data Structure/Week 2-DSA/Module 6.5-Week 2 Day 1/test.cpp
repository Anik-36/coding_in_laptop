#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i = 0; i<a; i++){
        for(int j= i ; j<a; j++){
            if(j==2){
                cout<<"break korbo";
                break;
            }
            cout<<j<<" ";
        }
        cout<<i<<" ";
        cout<<" kototuk break hoice"<<endl;
    }
}