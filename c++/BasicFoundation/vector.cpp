#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a[9];
    // for(int i=0; i<10; i++){
    //     cin>>a[i];
    // }
    //  for(int i=0; i<10; i++){
    //     cout<<a[i];
    // }
    vector<int>x;
    int a;
    for(int i=0; i<10; i++){
        cin>>a;
        x.push_back(a);
    }
    cout<<endl;
     for(auto i:x){
        cout<<i<<endl;
    }
    cout<<endl;
    x.pop_back();
    for(auto i:x){
        cout<<i<<endl;
    }




    /* set<int>x;
    int a;
    for(int i=0; i<10; i++){
        cin>>a;
        x.insert(a);
    }
    //  for(int i=0; i<10; i++){
    //     cout<<x[i]<<endl;
    // }
    cout<<endl;
    for(auto i:x){
        cout<<i<<endl;
    }
    x.erase(410);
     cout<<endl;
    for(auto i:x){
        cout<<i<<endl;
    }
 */

}