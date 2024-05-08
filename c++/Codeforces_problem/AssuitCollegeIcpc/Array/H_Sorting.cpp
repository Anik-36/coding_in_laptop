#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void bubble_sort(int a[], int n){
    for(int i = n-1 ; i>=1; i--){
        for(int j=0 ; j<=i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ;i<n; i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    for(int i = 0 ;i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}