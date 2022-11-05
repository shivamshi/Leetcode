class Solution {
public:
    vector<vector<int>>dp;
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        dp.resize(n+1,vector<int>(n+2,0));
        for(int x=2; x<=n+1; x++){
            int i=0,j=x;
            while(j<=n+1){
                int t=0;
                for(int ind=i+1; ind<j; ind++){
                    t=max(t,(nums[i]*nums[j]*nums[ind])+dp[i][ind]+dp[ind][j]);
                }
                dp[i][j]=t;
                i++;j++;
            }
        }
        return dp[0][n+1];
    }
};