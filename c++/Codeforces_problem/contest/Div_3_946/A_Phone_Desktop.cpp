#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b , ct = 0 , c = 0, g , s , h , i = 0;
        cin>>a>>b;
        c = b/2;
        if(b%2>0){
            c++;
        }
        h  =  a + b*4;
        i = h/15;
        if(h%15>0){
            i++;
        }
        if(i>c){
            cout<<i<<endl;
        }else{
            s = c*15;
            g = b*4;
            g+=a;
            if(g>s){
                c++;
            }
            cout<<c<<endl;
        }
    }
}