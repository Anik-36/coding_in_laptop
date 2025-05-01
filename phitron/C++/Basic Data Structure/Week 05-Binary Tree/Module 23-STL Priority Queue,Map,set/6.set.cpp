#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    /* set is a bst. and it gives the value in In-Order formate that means lower to higher. it removes the duplicate values.

    it makes operation in balanced bst. so all the operation will be in O(logn)

    sorting
    searching
    duplicates removing
    */
    set<int> s;
    int n;
    cin>>n;
    while(n--){ // O(NlogN)
        int x;
        cin>>x;
        s.insert(x); // O(logN)
    }


    cout<<s.count(100)<<endl; // it actually gives the count but set removes all the duplicate values. so the count is always 1 for the present number.
    if(s.count(100)){
        cout<<"Ase"<<endl;
    }else{
        cout<<"Nai"<<endl;
    }


    // for(auto it = s.begin(); it!=s.end(); it++){
    //     cout<<*it<<endl;
    // }
}