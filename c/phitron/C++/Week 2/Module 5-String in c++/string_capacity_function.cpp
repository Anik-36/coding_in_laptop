#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "Hello";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl; // 10^5

    // string s ="hello_my_name_is_anik";
    // cout<<s.capacity()<<endl; // 21 // it will increase size dynamically into highest array size
    // s = "hello_yes_my_name_is_anik_but_do_u_increase_your_size";
    // cout<<s.capacity()<<endl; // 53
    string s = "hello_yes_my_name_is_anik_but_do_u_increase_your_size1";
    cout<<s.capacity()<<endl; // 106
    //s.clear(); // it will clear the string
    // cout<<s<<endl; // the string is empty
    // if(s.empty()==true) cout<<"yes"<<endl;
    // else cout<<"no"<<endl;
    // s.resize(10);
    cout<<s<<endl;
    // cout<<s.size()<<endl;
    cout<<sizeof(s)<<endl;

}