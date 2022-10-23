class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int a,b;
        for(int i=0; i<nums.size(); i++){
            int t=nums[i];
            if(t<0){t*=-1;}
            if(nums[t-1]<0){
                a=t;
            }
            else{nums[t-1]*=-1;}
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                b=i+1;
                break;
            }
        }
        return {a,b};
    }
};