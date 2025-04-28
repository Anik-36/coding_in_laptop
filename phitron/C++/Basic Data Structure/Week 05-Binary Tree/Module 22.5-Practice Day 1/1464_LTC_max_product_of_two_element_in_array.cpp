/*

https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

*/

class Solution {
    public:
        int maxProduct(vector<int>& v) {
            sort(v.begin(),v.end());
            int mx = v[v.size()-1] - 1;
            v.pop_back();
            mx = mx*(v[v.size()-1] - 1 ) ;
            return mx;
        }
    };