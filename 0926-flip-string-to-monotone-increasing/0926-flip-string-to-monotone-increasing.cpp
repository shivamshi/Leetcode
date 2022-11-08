class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ind=0,ans,n=s.size(),o=0,z=0;
        for(auto i:s){
            if(i=='1'){
                o++;
            }
        }
        ans=o+z;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){z++;}
            else{o--;}
            ans=min(ans,o+z);
        }
        return ans;
    }
};