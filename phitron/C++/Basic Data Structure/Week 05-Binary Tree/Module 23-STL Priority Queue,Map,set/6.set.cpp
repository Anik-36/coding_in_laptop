#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    set<int> s;
    int n;
    cin>>n;
    while(n--){ // O(NlogN)
        int x;
        cin>>x;
        s.insert(x); // O(logN)
    }
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }
}