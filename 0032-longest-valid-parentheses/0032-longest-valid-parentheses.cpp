class Solution {
public:
    int longestValidParentheses(string s) {
        int t=0,m=0;
        stack<int>st;
        for(auto i:s){
            if(i=='(')
                st.push(-1);
            else{
                int t=0;
                while(!st.empty() && st.top()!=-1 && st.top()!=-2){
                    t+=st.top();
                    st.pop();
                }
                if(st.empty() || st.top()==-2){
                    st.push(t);
                    st.push(-2);
                }
                else{
                    st.pop();
                    st.push(t+2); 
                }
            }
        }
        t=0;
        while(!st.empty()){
            //cout<<st.top()<<" ";
            if(st.top()==-1 || st.top()==-2){t=0;}
            else{
                t+=st.top();
                m=max(m,t);
            }
            st.pop();
        }
        return m;
    }
};