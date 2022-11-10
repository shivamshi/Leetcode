class Solution {
public:
    int m,n;
    vector<vector<int>>dp;
    int func(int i,int j,string a,string b){
        if(j==n){return m-i;}
        if(i==m){return n-j;}
        if(dp[i][j]!=-1){return dp[i][j];}
        if(a[i]==b[j])
            return dp[i][j]=func(i+1,j+1,a,b);
        int x=func(i,j+1,a,b);
        int y=func(i+1,j,a,b);
        int z=func(i+1,j+1,a,b);
        return dp[i][j]=min(x,min(y,z))+1;
    }
    int minDistance(string a, string b) {
        m=a.size();n=b.size();
        dp.resize(m+1,vector<int>(n+1,-1));
        return func(0,0,a,b);
    }
};