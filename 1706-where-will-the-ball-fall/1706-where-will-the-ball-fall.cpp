class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>ans(n,-1);
        for(int ind=0; ind<n; ind++){
            int i=0,j=ind;
            while(i<m){
                if(grid[i][j]==1){
                    j++;
                    if(j<n && grid[i][j]==-1)
                        break;
                }
                else{
                    j--;
                    if(j>=0 && grid[i][j]==1)
                        break;
                }
                if(j<0 || j==n)
                    break;
                i++;
            }
            if(i==m){ans[ind]=j;}
        }
        return ans;
    }
};