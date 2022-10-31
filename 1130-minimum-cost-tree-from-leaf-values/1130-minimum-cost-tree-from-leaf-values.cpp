class Solution {
public:
    vector<vector<int>>dp,v;
    int func(int l,int r){
        if(l==r){return 0;}
        if(dp[l][r]!=-1){return dp[l][r];}
        int mn=INT_MAX;
        for(int i=l; i<r; i++){
            int t=v[l][i]*v[i+1][r]+func(l,i)+func(i+1,r);
            mn=min(mn,t);
        }
        return dp[l][r]=mn;
    }
    int mctFromLeafValues(vector<int>& nums) {
        int n=nums.size();
        v.resize(n,vector<int>(n));
        dp.resize(n,vector<int>(n,-1));
        for(int i=0; i<n; i++){
            int t=0;
            for(int j=i; j<n; j++){
                t=max(t,nums[j]);
                v[i][j]=t;
            }
        }
        return func(0,n-1);
    }
};