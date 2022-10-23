class Solution {
public:
    int minNumberOperations(vector<int>& nums) {
        int t=0,a=0;
        for(auto i:nums){
            if(i>t)
                a+=i-t;
            t=i;
        }
        return a;
    }
};