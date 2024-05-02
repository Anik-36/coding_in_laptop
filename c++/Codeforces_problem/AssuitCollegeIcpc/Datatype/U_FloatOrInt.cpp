#include<bits/stdc++.h>
using namespace std;
int main(){
    float a;
    int b;
    cin>>a;
    b = int(a);
    float c = float(a) - float(b);
    if(c==0){
        cout<<"int "<<b<<endl;
    }else cout<<"float "<<b<<" "<<fixed<<setprecision(3)<<c<<endl;
}