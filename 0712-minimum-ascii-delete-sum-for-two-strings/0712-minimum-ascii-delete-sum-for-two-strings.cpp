class Solution {
public:
    int dp[1001][1001];
    int calc(string &s , int n){
        int sum = 0;
        for(int i = n-1; i>=0 ; i--)
            sum += int(s[i]);
        return sum;
    }
    int solve(int n, int m, string &s1, string &s2){
        if(n == 0 && m == 0) return 0;
        if(n == 0 || m == 0){
            int sum;
            if(n == 0){
                sum = calc(s2, m);
            }
            else if(m == 0){
                sum = calc(s1, n);
            }
            return sum;
        }
        if(dp[n][m] != -1) return dp[n][m];
        int ans = 0;
        if(s1[n-1] == s2[m-1]){
            ans += solve(n-1, m-1, s1, s2);
        }
        else{
            ans += min(int(s1[n-1])+solve(n-1, m, s1, s2), int(s2[m-1])+solve(n, m-1, s1, s2));
        }
        return dp[n][m] = ans;
    }
    int minimumDeleteSum(string s1, string s2) {
        memset(dp, -1, sizeof(dp));
        return solve(s1.length(), s2.length(), s1, s2);
    }
};