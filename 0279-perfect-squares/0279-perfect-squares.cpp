class Solution {
public:
    int n=1;
    vector<int>dp;
    int func(int t){
        if(dp[t]!=-1){return dp[t];}
        int a=INT_MAX;
        for(int i=1; i<n; i++){
            if((i*i)>t){break;}
            a=min(a,func(t-(i*i))+1);
        }
        return dp[t]=a;
    }
    int numSquares(int num) {
        while((n*n)<=num)
            n++;
        dp.resize(num+1,-1);
        dp[0]=0;
        return func(num); 
    }
};