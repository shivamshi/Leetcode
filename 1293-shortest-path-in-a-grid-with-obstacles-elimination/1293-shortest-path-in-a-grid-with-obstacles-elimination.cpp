class Solution {
public:
    vector<vector<vector<int>>>v;
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        v.resize(m+1,vector<vector<int>>(n+1,vector<int>(k+1,1)));
        queue<vector<int>>q;
        q.push({0,0,k});
        int a=0;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int i=q.front()[0],j=q.front()[1],tk=q.front()[2];
                if(i==m-1 && j==n-1){return a;}
                if(i+1<m){
                    if(grid[i+1][j]){
                        if(tk>0 && v[i+1][j][tk-1]){
                            v[i+1][j][tk-1]=0;
                            q.push({i+1,j,tk-1});
                        }
                    }
                    else{
                        if(v[i+1][j][tk]){
                            v[i+1][j][tk]=0;
                            q.push({i+1,j,tk});
                        }
                    }
                }
                if(i-1>=0){
                    if(grid[i-1][j] ){
                        if(tk>0 && v[i-1][j][tk-1]){
                            v[i-1][j][tk-1]=0;
                            q.push({i-1,j,tk-1});
                        }
                    }
                    else{
                        if(v[i-1][j][tk]){
                            v[i-1][j][tk]=0;
                            q.push({i-1,j,tk});
                        }
                    }
                }
                if(j+1<n){
                    if(grid[i][j+1] ){
                        if(tk>0 && v[i][j+1][tk-1]){
                            v[i][j+1][tk-1]=0;
                            q.push({i,j+1,tk-1});
                        }
                    }
                    else{
                        if(v[i][j+1][tk]){
                            v[i][j+1][tk]=0;
                            q.push({i,j+1,tk});
                        }
                    }
                }
                if(j-1>=0){
                    if(grid[i][j-1]){
                        if(tk>0 && v[i][j-1][tk-1]){
                            v[i][j-1][tk-1]=0;
                            q.push({i,j-1,tk-1});
                        }
                    }
                    else{
                        if(v[i][j-1][tk]){
                            v[i][j-1][tk]=0;
                            q.push({i,j-1,tk});
                        }
                    }
                }
                q.pop();
            }
            a++;
        }
        return -1;
    }
};