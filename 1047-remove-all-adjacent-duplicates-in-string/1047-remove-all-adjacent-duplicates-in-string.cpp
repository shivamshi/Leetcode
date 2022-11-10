class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto i:s){
            if(!st.empty() && st.top()==i){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};