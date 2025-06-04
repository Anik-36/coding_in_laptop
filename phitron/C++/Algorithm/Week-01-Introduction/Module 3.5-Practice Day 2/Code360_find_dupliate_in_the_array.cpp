/*
https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602?leftPanelTab=0&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
	void merge(vector<int>& a,int l,int r,int mid){
        int left_size = mid - l+1;
        int L[left_size+1];
        int right_size = r-mid;
        int R[right_size+1];

        for(int i = 0,j = l; j<=mid ; i++,j++){
            L[i] = a[j];
        }
        L[left_size] = INT_MAX;
        for(int i = 0, j = mid+1; j<=r ; i++,j++){
            R[i] = a[j];
        }
        R[right_size] = INT_MAX;

        int lp = 0, rp = 0;
        for(int i = l ; i<=r; i++){
            if(L[lp]<=R[rp]){
                a[i] = L[lp];
                lp++;
            }else{
                a[i] = R[rp];
                rp++;
            }
        }
    }
    void merge_sort(vector<int>& a,int l, int r){
        if(l == r ) return;
        int mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,r,mid);
    }
int findDuplicate(vector<int> &a, int n){
	// Write your code here.
	merge_sort(a,0,n-1);
    int m = 1e5 + 10;
	// int f[m] = {0};
    vector<int> f(m,0);
	int val;
	for(int i = 0; i<n; i++){
		if(f[a[i]] != 0){
			val = a[i];
			break;
		}
		f[a[i]]++;
	}
	return val;
}