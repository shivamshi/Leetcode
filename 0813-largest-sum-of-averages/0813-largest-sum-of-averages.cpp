class Solution {
public:
    vector<vector<double>>sum;
    int n;
    vector<vector<vector<double>>>dp;
    double func(int i,int j,int k){
        if(j==n){return 0;}
        if(dp[i][j][k]!=-1){return dp[i][j][k];}
        if(k==1){return sum[i][n-1];}
        
        double a=func(j+1,j+1,k-1)+sum[i][j];
        double b=func(i,j+1,k);
        return dp[i][j][k]=max(a,b);        
    }
    double largestSumOfAverages(vector<int>& nums, int k) {
        n=nums.size();
        sum.resize(n,vector<double>(n));
        dp.resize(n,vector<vector<double>>(n,vector<double>(k+1,-1)));
        for(int i=0; i<n; i++){
            double t=0;
            for(int j=i; j<n; j++){
                t+=nums[j];
                sum[i][j]=(t/(j-i+1));
            }
        }
        return func(0,0,k);
    }    
};