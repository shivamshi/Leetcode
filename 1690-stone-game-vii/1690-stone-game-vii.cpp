class Solution {
public:
    vector<vector<int>>dp,sum;
    int stoneGameVII(vector<int>& nums) {
        int n=nums.size();
        sum.resize(n,vector<int>(n));
        for(int i=0; i<n; i++){
            int t=0;
            for(int j=i; j<n; j++){
                t+=nums[j];
                sum[i][j]=t;
            }
        }
        dp.resize(n,vector<int>(n,0));
        for(int k=1; k<n; k++){
            int i=0,j=k;
            while(j<n){
                dp[i][j]=max(sum[i+1][j]-dp[i+1][j],sum[i][j-1]-dp[i][j-1]);
                i++;j++;
            }
        }
        return dp[0][n-1];
    }
};