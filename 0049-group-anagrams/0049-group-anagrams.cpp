class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n=str.size();
        vector<vector<string>>ans;
        map<string,vector<int>>m;
        for(int i=0; i<n; i++){
            string t=str[i];
            sort(t.begin(),t.end());
            m[t].push_back(i);
        }
        for(auto i:m){
            vector<string>temp;
            for(auto j:i.second){
                temp.push_back(str[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};