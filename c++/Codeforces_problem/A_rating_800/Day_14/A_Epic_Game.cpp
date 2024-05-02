#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    while(c>=0){
        int ag = __gcd(a,c); //(3,9) = 3  (3,5)=1  (3,3) = 3
        if(ag>c){ // 3>9 wrong , 1>5 wrong , 3>3 wrong
            cout<<"1"<<endl;
            break;
        }
        c = c-ag; // 9 - 3 = 6, 5-1 = 4 , 3-3 = 0
        int bg = __gcd(b,c); // (5,6) = 1, (5,4) = 1  (5,0) = 5
        if(bg>c){ //1>6 wrong, 1>4 wrong , 5>0 correct
            cout<<"0"<<endl;
            break;
        }
        c = c-bg; // 6-1 = 5, 4-1= 3, 0 - 5 = -5
    }
}