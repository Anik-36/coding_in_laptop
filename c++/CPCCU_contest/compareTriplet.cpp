#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int compareTriplets(int a[], int b[]){
    int al=0, bo=0;
    for(int i=0 ; i<3; i++){
        if(a[i]>b[i]){
            al++;
        }else if(a[i]<b[i]){
            bo++;
        }
    }
    return cout<<al<<" "<<bo;
}
int main(){
    int a[3] , b[3];
    for(int i=0 ; i<3; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<3; i++){
        cin>>b[i];
    }
    cout<<compareTriplets(a,b);
}