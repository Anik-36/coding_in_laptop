#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+10;
int a[N];

void merge(int l, int r, int mid){
    int left_size = mid - l +1;
    int L[left_size+1];
    int right_size = r-mid;
    int R[right_size+1];

    for(int i = 0, j = l; j<=mid; i++,j++){
        L[i] = a[j];
    }
    L[left_size] = INT_MAX;

    for(int i = 0, j = mid+1; j<=r; i++,j++){
        R[i] = a[j];
    }
    R[right_size] = INT_MAX;

    int lp = 0 , rp = 0;

    for(int i = l; i<=r; i++){
        if(L[lp]<=R[rp]){
            a[i] = L[lp];
            lp++;
        }else{
            a[i] = R[rp];
            rp++;
        }
    }
}
void merge_sort(int l, int r){
    if(l == r) return;
    int mid = (l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    merge(l,r,mid);
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    merge_sort(0,n-1);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

}