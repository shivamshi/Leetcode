class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        for(int x=1; x<m; x++){
            int i=x,j=0;
            int t=mat[i][j];
            while(i<m && j<n){
                if(mat[i][j]!=t){return false;}
                i++;j++;
            }
        }
        for(int x=0; x<n; x++){
            int i=0,j=x;
            int t=mat[i][j];
            while(i<m && j<n){
                if(mat[i][j]!=t){return false;}
                i++;j++;
            }
        }
        return true;
    }
};