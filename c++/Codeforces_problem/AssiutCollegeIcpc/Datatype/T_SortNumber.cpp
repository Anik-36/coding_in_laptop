#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a<=b and a<=c and b<=c) cout<<a<<endl<<b<<endl<<c<<endl<<endl;
    else if(a<=b and a<=c and c<=b) cout<<a<<endl<<c<<endl<<b<<endl<<endl;
    else if(b<=a and b<=c and a<=c) cout<<b<<endl<<a<<endl<<c<<endl<<endl;
    else if(b<=a and b<=c and c<=a) cout<<b<<endl<<c<<endl<<a<<endl<<endl;
    else if(c<=a and c<=b and b<=a) cout<<c<<endl<<b<<endl<<a<<endl<<endl;
    else if(c<=a and c<=b and a<=b) cout<<c<<endl<<a<<endl<<b<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}