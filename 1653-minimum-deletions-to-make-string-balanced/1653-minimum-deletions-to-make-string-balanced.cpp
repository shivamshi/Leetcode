class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int>pre(n);
        if(s[n-1]=='a'){pre[n-1]=1;}
        for(int i=n-2; i>=0; i--){
            if(s[i]=='a'){pre[i]=pre[i+1]+1;}    
            else{pre[i]=pre[i+1];}
        }
        int m=n-pre[0],t=0;
        for(int i=0; i<n; i++){
            m=min(m,t+pre[i]);
            //cout<<pre[i]<<" ";
            if(s[i]=='b'){t++;}
        }
        return m;
    }
};