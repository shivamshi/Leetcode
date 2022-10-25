class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n=nums.size(),m=0;
        vector<int>l(n,-1),r(n,n);
        stack<int>st,temp;
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                r[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        st=temp;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()]>nums[i]){
                l[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        for(int i=0; i<n; i++){
            m=max(m,nums[i]*(r[i]-l[i]-1));
        }
        return m;
    }
};