class Solution {
public:
    string makeGood(string s) {
        string ans=""; 
        stack<char>st;
        for(auto i:s){
            if(!st.empty() && ((st.top()-'a'==i-'A')||(st.top()-'A'==i-'a'))){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};