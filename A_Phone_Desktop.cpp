#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
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
        // if( b == 0 ){
        //     c = a/15;
        //     if(a%15>0){
        //         c++;
        //     }
        // }
    }
}