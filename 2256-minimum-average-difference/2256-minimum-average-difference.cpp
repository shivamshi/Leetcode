class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int n=nums.size(),mn=INT_MAX,ind,t,a=0,b;
        vector<long long int>pre(n+1);
        pre[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            pre[i]=nums[i]+pre[i+1];
        }
        pre.push_back(0);
        for(int i=0; i<n-1; i++){
            a+=nums[i];
            b=pre[i+1];
            t=abs(a/(i+1)-(b/(n-i-1)));
            if(t<mn){ind=i;mn=t;}
        }
        a+=nums[n-1];
        t=a/n;
        if(t<mn){ind=n-1;}
        return ind;
    }
};