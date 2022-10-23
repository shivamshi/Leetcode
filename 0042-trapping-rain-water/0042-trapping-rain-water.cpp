class Solution {
public:
    int trap(vector<int>& nums) {
        int ans=0;
        stack<int>st;
        st.push(0);
        for(int i=0; i<nums.size(); i++){
            if(st.empty() || nums[st.top()]>=nums[i]){st.push(i);}
            else{
                int s=0;
                int t,ti;
                ti=st.top();
                t=nums[ti];
                st.pop();
                while(!st.empty() && nums[st.top()]<nums[i]){
                    int b=st.top();
                    s+=(ti-b)*t;
                    ti=b;
                    t=nums[ti];
                    st.pop();
                }
                if(!st.empty()){
                    int b=st.top();
                    s+=(ti-b)*t;
                    ti=b;
                    ans+=((i-ti-1)*nums[i])-s;
                  //  cout<<i<<" "<<ti<<" "<<nums[i]<<" "<<s<<"\n";
                }
                else{
                   // cout<<i<<" "<<ti<<" "<<t<<" "<<s<<"\n";
                    ans+=((i-ti-1)*t)-s;
                }
                st.push(i);           
            }
        }
        return ans;
    }
};