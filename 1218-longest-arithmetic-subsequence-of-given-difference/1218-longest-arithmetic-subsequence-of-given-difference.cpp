class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        unordered_map<int,int>m;
        int mx=INT_MIN;
        for(auto i:arr){
            mx=max(mx,m[i]=m[i-d]+1);        
        }
        return mx;
    }
};