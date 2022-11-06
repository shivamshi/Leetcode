class Solution {
public:
    void func(string &s){
        char t=s[0];
        for(int i=0; i<s.size()-1; i++){
            s[i]=s[i+1];
        }
        s[s.size()-1]=t;
    }
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        vector<string>ans;
        for(int i=0; i<s.size(); i++){
            ans.push_back(s);
            func(s);
        }
        sort(ans.begin(),ans.end());
        return ans[0];        
    }
};