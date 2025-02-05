class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // int ct = 0;
        // int ans = 0;
        // for(int i = 0; i<grid.size(); i++){
        //     int l = 0;
        //     int u = grid[0].size();
        //     while(l<u){
        //         int m = (l+u)/2;
        //         if(grid[i][m]>=0){
        //             l = m+1;
        //         }else{
        //             u = m;
        //         }
        //         ans = m;
        //     }
        //     ct += grid[0].size()-ans;
        // }
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j]<0) ct++;
            }
        }
        return ct;
    }
};