class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int l = 0;
            int u = n-1;
            int ans = -1;
            while(l<=u){
                int mid = (l+u)/2;
                if(nums[mid]>=target){
                    u = mid -1;
                    if(nums[mid]==target){
                        ans = mid;
                    }
                }else{
                    l = mid + 1;
                }
            }
            return ans;
        }
    };


    //https://leetcode.com/problems/binary-search/