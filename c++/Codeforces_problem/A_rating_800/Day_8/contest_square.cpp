#include<bits/stdc++.h>
using namespace std;
int main(){
    // int t,a[1], x, y, ny;
    // cin>>t;
    // while(t--){
    //     for(int i=0; i<8; i+=2){
    //         cin>>x>>y;
    //         a[i]={x};
    //         a[i+1]={y};
    //     }
    //     for(int i=2; i<8; i+=2){
    //         if(a[0]==a[i]){
    //             ny =a[1]-a[i+1];
    //         }
    //     }
    //     int r = ny * ny;
    //     cout<<r<<endl;
    // }
    int t,a[4][2], x, y, ny, r;
    cin>>t;
    while(t--){
        for(int i=1; i<=4; i++){
            for(int j=1 ; j<=2; j++){
                cin>>x;
                a[i][j]=x;
            }
        }
        for(int i=1; i<=4; i++){
            for(int j=1 ; j<=2; j++){
                if(a[1][1]==a[i][j]){
                    ny =a[1][2]-a[i][j+1];
                }
            }
        }
        r = abs(ny * ny);
        cout<<r<<endl;
        r=1;
        ny= 0 ;
    }
}