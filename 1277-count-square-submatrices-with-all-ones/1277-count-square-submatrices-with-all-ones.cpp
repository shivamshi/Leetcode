class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int a=0,t=1,m=mat.size(),n=mat[0].size();
        while(t<min(m,n)){
            for(int i=0; i<m-1; i++){
                for(int j=0; j<n-1; j++){
                    if(mat[i][j]==t){
                        if(mat[i][j+1]==t && mat[i+1][j]==t && mat[i+1][j+1]==t){
                            mat[i][j]++;
                            a++;
                        }
                    }
                }
            }
            t++;
        }
        for(auto i:mat)
            for(auto j:i)
                a+=(j!=0);
        return a;
    }
};