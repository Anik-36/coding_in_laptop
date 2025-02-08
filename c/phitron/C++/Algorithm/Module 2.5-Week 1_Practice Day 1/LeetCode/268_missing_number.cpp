class Solution {
    public:
        int missingNumber(vector<int>& a) {
            int n = a.size();
            int ans = -1;
            a.push_back(n+1);
            sort(a.begin(),a.end());
            for(int i = 0; i<=n; i++){
                if(a[i]!=i){
                    ans = i;
                    break;
                }
            }
            return ans ;
        }
    };

    //https://leetcode.com/problems/missing-number/description/