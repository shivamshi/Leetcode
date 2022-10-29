class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int a=0,t,c=0,i=0,j=0,n=nums.size();
        map<int,int>m;
        while(j<n){
            m[nums[j]]++;
            if(m[nums[j]]==1){c++;}
            t=i;
            while(j<n && c==k){
             //   cout<<j<<" ";
                while(c==k){
                    m[nums[i]]--;
                    if(m[nums[i]]==0){c--;}
                    i++;
                }
                i--;
                m[nums[i]]++;
                c++;
               // cout<<i<<" "<<t<<"\n";
                a+=i-t+1;
             //   cout<<i-t+1<<"\n";
                j++;
                if(j<n){
                    m[nums[j]]++;
                    if(m[nums[j]]==1){c++;}   
                }
           //     cout<<j<<"\n";
            }
            if(c==k+1){
                m[nums[j]]--;
                if(m[nums[j]]==0){c--;}
                j--;
                m[nums[i]]--;
                if(m[nums[i]]==0){c--;}
                i++;
            }
            j++;
        }
        return a;
    }
};