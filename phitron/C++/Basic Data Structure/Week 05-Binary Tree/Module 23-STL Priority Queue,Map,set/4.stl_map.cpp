#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    map<string,int> mp;

    mp["anik"] = 36; // O(log(N))
    mp["anik"] = 4000; // it just update the value not created another location.
    mp["jemin"] = 40;

    // // inserting
    // mp.insert({"sakib al hasan",75});
    // mp.insert({"tamim iqbal",28});
    // mp.insert({"shamim hossain patowary",19});

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl; // O(log(N)) for single value
        // though "it" is a pointer so it can't take (.), it takes (->).

    }

    cout<<mp["anik"]<<endl; //it shows the value of index anik.

    //cout<<mp["anik"]<<endl; // if the index is not valid it gives 0. so for make sure we use count function .

    if(mp.count("anik")){
        cout<<"ase"<<endl;
    }else{
        cout<<"nai"<<endl;
    }
}