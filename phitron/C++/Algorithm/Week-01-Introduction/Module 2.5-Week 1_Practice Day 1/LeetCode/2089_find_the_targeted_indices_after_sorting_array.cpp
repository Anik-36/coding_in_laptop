class Solution {
    public:
        vector<int> targetIndices(vector<int>& a, int target) {
            int n = a.size();
            sort(a.begin(),a.end());
            vector<int> b;
            int ans = -1;
            int l = 0;
            int u = n-1;
            while(l<=u){
                int mid = (l+u)/2;
                if(a[mid]>=target){
                    u = mid - 1;
                    if(a[mid]==target){
                        ans = mid;
                    }
                }else{
                    l = mid + 1;
                }
            }
            if(ans != -1){
                for(int i = ans ; i<a.size() and a[i]==target; i++){
                    b.push_back(i);
                }
            }
            return b;
        }
    };



    //https://leetcode.com/problems/find-target-indices-after-sorting-array/description/