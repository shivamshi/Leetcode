class Solution {
public:
    int findLongestChain(vector<vector<int>>& v) {
        int t=1,a=1;
        sort(v.begin(), v.end(), [&] (auto a, auto b) {return a[1] < b[1];});  
        int x=v[0][0],y=v[0][1];
        for(int i=1; i<v.size(); i++){
            int tx=v[i][0],ty=v[i][1];
          //  cout<<x<<" "<<y<<" "<<tx<<" "<<ty<<"\n";
            if(y<tx){
                t++;
             //   cout<<t<<" ";
                a=max(t,a);
                y=ty;
            }
            else{
                if(ty>=y){continue;}
                else{
                    y=ty;
                    x=tx;
                    t=1;
                }
            }
        }
        return a;
    }
};