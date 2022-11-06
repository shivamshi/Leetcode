class Solution {
public:
    vector<int>dp;
    int func(int ind,int k,vector<int>nums){
        if(dp[ind]!=-1){return dp[ind];}
        int a=0,t=0;
        for(int i=ind; i<min(ind+k,(int)nums.size()); i++){
            t=max(t,nums[i]);
            a=max(a,((i-ind+1)*t)+func(i+1,k,nums));
        }
        return dp[ind]=a;
    }
    int maxSumAfterPartitioning(vector<int>& nums, int k) {
        int n=nums.size();
        dp.resize(n+1,-1);
        dp[n]=0;
        for(int ind=n-1; ind>=0; ind--){
            int a=0,t=0;
            for(int i=ind; i<min(ind+k,n); i++){
                t=max(t,nums[i]);
                a=max(a,((i-ind+1)*t)+dp[i+1]);
            }    
            dp[ind]=a;
        }
        return dp[0];
    }
};