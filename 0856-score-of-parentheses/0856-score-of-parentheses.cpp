class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(auto i:s){
            if(i=='('){
                st.push(-1);
            }
            else{
                int t=0;
                while(st.top()!=-1 ){
                    t+=st.top();
                    st.pop();
                }
                st.pop();
                if(t==0){
                    st.push(1);
                }
                else{
                    t*=2;
                    st.push(t);
                }
            }
        }
        int t=0;
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        return t;
    }
};