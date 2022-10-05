class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        queue<pair<int,int>>q;
        q.push({k,0});
        vector<int>v(n+1,100000);
        v[k]=0;
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto i:times){
            adj[i[0]].push_back({i[1],i[2]});
        }
        while(!q.empty()){
            pair f=q.front();
          //  cout<<f.first<<" ; ";
            for(auto p:adj[f.first]){
           //     cout<<p.first<<" "<<p.second<<" ";
                if(f.second+p.second<v[p.first]){
                   // cout<<f.second+1<<" ";
                    v[p.first]=f.second+p.second;
                    q.push({p.first,f.second+p.second});
                }
            }
         //   cout<<"\n";
            q.pop();
        }
        int m=1;
        for(int i=1; i<=n; i++){
        //    cout<<v[i]<<" ";
            if(v[i]==100000)
                return -1;
            m=max(m,v[i]);
        }
        return m;
    }
};