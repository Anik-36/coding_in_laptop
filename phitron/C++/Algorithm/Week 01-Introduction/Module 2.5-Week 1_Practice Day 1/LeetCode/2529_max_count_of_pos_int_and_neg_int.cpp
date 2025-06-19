class Solution {
    public:
        int maximumCount(vector<int>& a) {
            int n = a.size();
            int l = 0;
            int u = n-1;
            int ctp = -1;
            int ctn = -1;
            while(l<=u){
                int mid = (l+u)/2;
                if(a[mid]<=0){
                    l = mid + 1;
                }else{
                    u = mid - 1;
                }
                ctp = l;
            }
            ctp = n-ctp;
            cout<<ctp<<endl;
            l = 0;
            u = n-1;
            while(l<=u){
                int mid = (l+u)/2;
                if(a[mid]>=0){
                    u = mid - 1;
                }else{
                    l = mid + 1;
                }
                ctn = u;
            }
            ctn = ctn + 1;
            cout<<ctn<<endl;
            int ans = max(ctp,ctn);
            return ans;
        }
    };


    //https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/