class Solution {
public:
    int maxPoints(vector<vector<int>>& nums) {
        int n=nums.size(),m=0;
        for(int i=0; i<n; i++){
            map<vector<int>,int>mp;
            int x1,y1;
            x1=nums[i][0];
            y1=nums[i][1];
            for(int j=0; j<n; j++){
                if(i==j){continue;}
                int mn,md,cn,cd,g,x2,y2;
                x2=nums[j][0];y2=nums[j][1];
                g=__gcd(x1-x2,y1-y2);
                if(g==0){
                    mn=INT_MAX;md=INT_MAX;
                }
                else{
                    mn=(y1-y2)/g;
                    md=(x1-x2)/g;   
                }
                g=__gcd((y2*x1)-(y1*x2),x1-x2);
                if(g==0){
                    cn=INT_MAX;cd=INT_MAX;
                }
                else{
                    cn=((y2*x1)-(y1*x2))/g;
                    cd=(x1-x2)/g;   
                }
                mp[{mn,md,cn,cd}]++;
            }
            for(auto i:mp){
                m=max(m,i.second);
            }    
        }
        return m+1;
    }
};