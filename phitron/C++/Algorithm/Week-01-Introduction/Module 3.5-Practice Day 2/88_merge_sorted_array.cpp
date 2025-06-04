/*
https://leetcode.com/problems/merge-sorted-array/description/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> l;
        for(int i = 0; i<m; i++){
            l.push_back(nums1[i]);
        }
        cout<<endl;
        l.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        nums1.clear();
        int lp = 0, rp = 0;
        for(int i = 0; i<m+n; i++){
            if(l[lp]<=nums2[rp]){
                nums1.push_back(l[lp]);
                lp++;
            }else{
                nums1.push_back(nums2[rp]);
                rp++;
            }
        }
    }
};