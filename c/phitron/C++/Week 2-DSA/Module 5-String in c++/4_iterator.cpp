#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a;
    cin>>a;
    // for(int i = 0; i<a.size(); i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<*a.begin()<<endl; // a.begin() is a pointer.
    // cout<<*(a.end()-1)<<endl; // a.end() will give you the pointer of the last element's right position


    // string:: iterator it;
    // for(it = a.begin(); it<a.end(); it++){
    //     cout<<*it<<endl;
    // }


    // for(string:: iterator i=a.begin(); i<a.end(); i++){
    //     cout<<*i<<endl;
    // }

    for(auto i = a.begin(); i<a.end();i++){
        cout<<*i<<endl;
    }

}