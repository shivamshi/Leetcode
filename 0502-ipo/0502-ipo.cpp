class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        priority_queue<int>q;
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++){
            v.push_back({capital[i],i});
        }
        sort(v.begin(),v.end());
        int i=0;
        while(k){
            while(i<n && v[i].first<=w){
                q.push(profits[v[i].second]);
                i++;
            }
            if(q.empty()){break;}
            w+=q.top();
            q.pop();
            k--;
        }
        return w;
    }
};