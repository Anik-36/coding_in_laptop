#include<bits/stdc++.h>
using namespace std;
int main(){
    float a, b; 
    float r, c, f, d;
    cin>>a>>b;
    r = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(r)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(r)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(r)<<endl;
}