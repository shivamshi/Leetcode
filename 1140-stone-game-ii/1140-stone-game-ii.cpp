class Solution {
public:
    vector<vector<vector<int>>>dp;
    int func(int i,int m,int chance,vector<int>nums){
        if(i==nums.size()){return 0;}
        if(dp[i][m][chance]!=-1){return dp[i][m][chance];}
        if(chance){
            int temp=0,a=0;
            for(int k=0; k<(2*m); k++){
                if((i+k)==nums.size()){break;}
                temp+=nums[i+k];
                a=max(a,func(i+k+1,max(k+1,m),0,nums)+temp);
            }
            return dp[i][m][chance]=a;
        }
        int temp=0,a=INT_MAX;
        for(int k=0; k<(2*m); k++){
            if((i+k)==nums.size()){break;}
            a=min(a,func(i+k+1,max(k+1,m),1,nums));
        }
        return dp[i][m][chance]=a;        
    }
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        dp.resize(n,vector<vector<int>>(n+1,vector<int>(2,-1)));
        return func(0,1,1,piles);
    }
};