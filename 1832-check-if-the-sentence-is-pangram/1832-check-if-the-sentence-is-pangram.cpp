class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26);
        int t=0;
        for(auto i:sentence){
            if(v[i-'a']==0){t++;v[i-'a']++;}
        }
        return t==26;
    }
};