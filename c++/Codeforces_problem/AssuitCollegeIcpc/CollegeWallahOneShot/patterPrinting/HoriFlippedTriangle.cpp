#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>> n;

    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<< " ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i<< " ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<n-j+1<< " ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<n-i+1<< " ";
        }
        cout<<endl;
    }
}