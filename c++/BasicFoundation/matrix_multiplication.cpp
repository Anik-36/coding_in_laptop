#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int r1,c1,r2,c2;
    int sum = 0 ;
    cin>>r1>>c1>>r2>>c2;
    int r[r1][c2];
    
    while(c1!=r2){
        cout<<"error ! give the meaning full row colomn value. ";
        cin>>r1>>c1>>r2>>c2;
    }
    int fm[r1][c1];
    int sm[r2][c2];
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c1; j++){
            cout<<"fm["<<i<<"]["<<j<<"]=";
            cin>>fm[i][j];
        }
    }
    for(int i = 0 ; i<r2; i++){
        for(int j = 0 ; j<c2; j++){
            cout<<"sm["<<i<<"]["<<j<<"]=";
            cin>>sm[i][j];
        }
    }
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c2; j++){
            for(int k = 0 ; k<c1; k++){
                sum += fm[i][k] * sm[k][j];
            }
            r[i][j]= sum;
            sum = 0;
        }
    }
    cout<<"mul = ";
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c2; j++){
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
}