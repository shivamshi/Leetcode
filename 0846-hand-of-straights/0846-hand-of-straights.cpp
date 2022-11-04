class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int gs) {
        int n=nums.size();
        if(n%gs){return false;}
        sort(nums.begin(),nums.end());
        map<int,int>m;
        for(auto i:nums){m[i]++;}
        int i=0;
        while(i<n){
            if(m[nums[i]]){
                int t=0,j=nums[i];
                while(t<gs){
                    if(m[j]){
                        t++;
                        m[j]--;
                        j++;
                    }
                    else{
                        break;
                    }
                }
                if(t!=gs){
                    return false;
                }
            }
            i++;
        }
        return true;
    }
};