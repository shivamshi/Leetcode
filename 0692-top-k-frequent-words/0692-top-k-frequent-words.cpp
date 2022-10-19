class Solution {
public:
    vector<string> topKFrequent(vector<string>& nums, int k) {
        int n=nums.size(),i;
        map<string,int>m;
        for(auto i:nums){m[i]++;}
        vector<vector<string>>b;
        b.resize(n+1,{});
        for(auto i:m){
            b[i.second].push_back(i.first);            
        }
        for(auto i:b){
            sort(i.begin(),i.end());
        }
        vector<string>ans;
        for(int i=n; i>=1; i--){
            if(k==0){break;}
            for(auto t:b[i]){
                if(k==0){break;}
                ans.push_back(t);
                k--;                    
            }
        }
        return ans;
    }
};