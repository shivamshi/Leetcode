class Solution {
public:
    int dp[50001];
    int helper(vector<int>& arr,int i){
      int ans=INT_MIN;
        
        if(dp[i]!=-1)return dp[i];
        
        if(i>=arr.size())return 0;
        
        
            ans=max(ans,arr[i]-helper(arr,i+1));
        if(i+1<arr.size())
            ans=max(ans,arr[i]+arr[i+1]-helper(arr,i+2));
        if(i+2<arr.size())
            ans=max(ans,arr[i]+arr[i+1]+arr[i+2]-helper(arr,i+3));
       
        return dp[i]=ans;
    }
    string stoneGameIII(vector<int>& stoneValue) {
      memset(dp, -1, sizeof(dp));
        int x=helper(stoneValue,0);
        if(x>0)return "Alice";
        if(x==0)return "Tie";
        return "Bob";
    }
};