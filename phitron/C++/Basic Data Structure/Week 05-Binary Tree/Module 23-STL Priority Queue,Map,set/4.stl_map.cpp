#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    map<string,int> mp;
    mp.insert({"sakib al hasan",75});
    mp.insert({"tamim iqbal",28});
    mp.insert({"shamim hossain patowary",19});

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl; // though "it" is a pointer so it can't take (.), it takes (->).
    }
}