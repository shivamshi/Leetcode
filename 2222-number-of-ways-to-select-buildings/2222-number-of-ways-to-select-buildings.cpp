class Solution {
public:
    long long numberOfWays(string s) {
        long long a=0,n=s.size(),t=0;
        vector<int>v(n);
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                t++;
            }
            else{
                v[i]=t;
            }
        }
        t=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                a+=t;
            }
            else{
                t+=v[i];
            }
        }
        v.resize(n,0);
        t=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                t++;
            }
            else{
                v[i]=t;
            }
        }
        t=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                a+=t;
            }
            else{
                t+=v[i];
            }
        }
        return a;
    }
};