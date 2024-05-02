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
    int count = 0;
        for(int i=0; i<3; i++){
            if(a[0]=='a'){
                yes
                count++;
                break;
            } 
            else if(a[1]=='b'){
                yes
                count++;
                break;
            } 
            else if(a[2] == 'c') {
                yes
                count++;
                break;
            }
        }
        if(count == 0){
            no
        }
    }
}