class Solution {
public:
    int minTaps(int n, vector<int>& nums) {
        vector<int>v(n+1,-1);
        for(int i=0; i<=n; i++){
            v[max(0,i-nums[i])]=max(max(0,i-nums[i]),i+nums[i]);
        }
        int t=v[0],a=1,m=0;
      //  for(auto i:v){cout<<i<<" ";}cout<<"\n";
        for(int i=0; i<n; i++){
            m=max(m,v[i]);
            if(t<=i){
                a++;
                t=m;
                if(m==i){cout<<i<<" ";return -1;}
            }

        }
        return a;
    }
};