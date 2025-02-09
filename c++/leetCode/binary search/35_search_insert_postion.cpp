class Solution {
    public:
        int searchInsert(vector<int>& a, int target) {
            int n = a.size();
            int ans = -1;
            int l = 0;
            int u = n-1;
            while(l<=u){
                int mid = (l+u)/2;
                if(a[mid]<=target){
                    l = mid + 1;
                    if(a[mid] == target){
                        ans = mid ;
                    }
                }else{
                    u = mid - 1;
                }
            }
            if(ans!=-1 and a[ans]==target){
                return ans;
            }else return l;
        }
    };