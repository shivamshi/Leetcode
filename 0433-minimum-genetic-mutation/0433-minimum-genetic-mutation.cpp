class Solution {
public:
    bool check(string a,string b){
        int t=0;
        for(int i=0; i<a.size(); i++){
            if(a[i]!=b[i]){t++;}
        }
        return t==1;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string>q;
        int a=0;
        q.push(start);
        map<string,int>m;
        while(!q.empty()){
            int l=q.size();
            while(l--){
                string s=q.front();
                if(s==end){return a;}
                for(auto i:bank){
                    if(m[i]==0 && check(i,s)){
                        q.push(i);
                        m[i]++;
                    }
                }
                q.pop();
            }
            a++;
        }
        return -1;
    }
};