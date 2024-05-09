#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>> n;
    //capital alphabet
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64)<<"  ";
        }
        cout<<endl;
    }

    //small alphabet
    cout<<endl<<endl;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+96)<<"  ";
        }
        cout<<endl;
    }

    //single alphabet
    cout<<endl<<endl;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(i+96)<<"  ";
        }
        cout<<endl;
    }
}