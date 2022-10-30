class Solution {
public:
    int sumSubarrayMins(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>r(n,n),l(n,-1);
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[i]<=nums[st.top()]){
                r[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){st.pop();}
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[i]<nums[st.top()]){
                l[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        long long ans=0,mod=1000000007;
        for(int i=0; i<n; i++){
            long long a=i-l[i],b=r[i]-i,c=nums[i];
            ans+=a*b*c;
            ans%=mod;
         //   cout<<ans<<"\n";
        }
        return ans%mod;
    }
};