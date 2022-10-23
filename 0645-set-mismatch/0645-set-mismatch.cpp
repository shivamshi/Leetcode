class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            int t=nums[i];
            if(t<0){t*=-1;}
            if(nums[t-1]<0){
                ans.push_back(t);
            }
            else{nums[t-1]*=-1;}
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans.push_back(i+1);
                break;
            }
        }
        return ans;
    }
};