class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int t=k;
        if(nums.size()<t){t=nums.size();}
        for(int i=0; i<t; i++){
            m[nums[i]]++;
            if(m[nums[i]]==2){return true;}
        }
        for(int i=k; i<nums.size(); i++){
            m[nums[i]]++;
            if(m[nums[i]]==2){return true;}
            m[nums[i-k]]--;
        }
        return false;
    }
};