class Solution {
public:
    string longestPalindrome(string s) {
        int m=0,n=s.size();
        string a;
        for(int ind=0; ind<n; ind++){
            int i=ind-1,j=ind+1,t=1;
            while(i>=0 && j<n){
                if(s[i]==s[j]){
                    t+=2;
                    i--;j++;
                }
                else{
                    break;
                }
            }
            if(t>m){
                m=t;
                i++;j--;
                a=s.substr(i,j-i+1);
            }
        }
     //   cout<<a<<" ";
        for(int ind=1; ind<n; ind++){
            int i=ind-1,j=ind,t=0;
            while(i>=0 && j<n){
                if(s[i]==s[j]){
                    t+=2;
                    i--;j++;
                }
                else{
                    break;
                }
            }
            if(t>m){
                m=t;
                i++;j--;
                a="";
                a=s.substr(i,j-i+1);
            }
        }
        return a;
    }
};