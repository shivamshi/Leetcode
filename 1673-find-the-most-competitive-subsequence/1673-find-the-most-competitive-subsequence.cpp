class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        int n=nums.size();
        for(int i=0; i<n; i++){
            while(st.size()>max(0,i-(n-k)) && nums[i]<st.top()){
                st.pop();
            }
            st.push(nums[i]);
        }
        while(st.size()>k){
            st.pop();
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};