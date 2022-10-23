class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                ans[st.top()]++;
                st.pop();
            }
            if(!st.empty()){
                ans[st.top()]++;
            }
            st.push(i);
        }
        return ans;
    }
};