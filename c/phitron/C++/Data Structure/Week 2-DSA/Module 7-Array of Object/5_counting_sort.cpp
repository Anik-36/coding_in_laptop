#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int frq[26] = {0};
    for(int i = 0; i<n; i++){
        char a;
        cin>>a;
        frq[a-'a']++;
    }
    for(char i = 'a'; i<='z'; i++){
        if(frq[i-'a']>0){
            for(int j = 0; j<frq[i-'a']; j++){
                cout<<i;
            }
        }
    }
}