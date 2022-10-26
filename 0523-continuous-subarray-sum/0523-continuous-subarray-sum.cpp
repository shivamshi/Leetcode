class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        int s=0;
        m[s]++;
        for(auto i:nums){
            s=(s+i)%k;
            if(i%k){
                if(m[s]){
                    return true;
                }    
            }
            m[s]++;
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]%k==0 && nums[i+1]%k==0){
                return true;
            }
        }
        return false;
    }
};