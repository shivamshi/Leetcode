class Solution {
public:
    string convertToTitle(int n) {
        long long int i=0,s=1,t=26,a=0;
        string ans="",str="ZABCDEFGHIJKLMNOPQRSTUVWXY";
       // while(t<n){s++; t*=26;}
        //t/=26;
        while(n>0){
            a=n%t;
            n-=a;
            if(a==0){n-=t;}
            a/=(t/26);
            ans+=str[a];
            t*=26; 
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};