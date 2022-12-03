class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(auto i:s){
            m[i]++;
        }
        vector<pair<int,char>>v;
        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string ans="";
        for(auto p:v){
            for(int i=0; i<p.first; i++){
                ans+=p.second;
            }
        }
        return ans;
    }
};