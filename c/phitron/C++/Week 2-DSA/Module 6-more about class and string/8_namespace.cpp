#include<bits/stdc++.h>
using namespace std;
namespace anik{
    int age = 23;
    hello(){
        cout<<"namespace from anik"<<endl;
    }
}
namespace manik{
    int age2 = 30;
    hello(){ // use different name for diff namespace
        cout<<"namespace from manik"<<endl;
    }
}
using namespace anik;
int main(){
    // cout<<anik::age<<endl;
    cout<<age<<endl;
    hello();

    cout<<manik::age2<<endl;
    manik::hello();
}