class Solution {
public:
    string minWindow(string s, string t) {
        int j=0,n=s.size(),m=INT_MAX,temp=0;
        string ans="";
        map<char,int>ms,mt;
        for(auto i:t){mt[i]++;}
        temp=mt.size();
        for(int i=0; i<n; i++){
            //cout<<i<<" ";
            ms[s[i]]++;
            if(ms[s[i]]==mt[s[i]]){
                temp--;
                if(temp==0){
                //cout<<i<<" ";
                    while(temp==0){
                        if(ms[s[j]]==mt[s[j]]){
                            temp++;    
                        }
                        ms[s[j]]--;
                        j++;
                    }
                    if(m>(i-j+2)){
                        m=i-j+2;
                        ans=s.substr(j-1,m);
                    }
                }
            }
        }
        cout<<"\n"<<m;
        return ans;
    }
};