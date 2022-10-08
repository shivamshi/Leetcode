class Solution {
public:
    int threeSumClosest(vector<int>& nums, int tar) {
        sort(nums.begin(),nums.end());
        int m=INT_MAX,a;
        for(int k=0; k<nums.size(); k++){
            int i=k+1,j=nums.size()-1,t;
            while(i<j){
                t=nums[i]+nums[j]+nums[k];
                if(abs(tar-t)<m){m=abs(tar-t);a=t;}
                if(t<tar){i++;}
                else{j--;}
            }
        }
        return a;
    }
};