class Solution {
public:
    vector<int>dp;
    int func(int ind,vector<int>days,vector<int>cost){
        if(ind==days.size()){return 0;}
        if(dp[ind]!=-1){return dp[ind];}
        int a,b,c,i;
        a=cost[0]+func(ind+1,days,cost);
        i=ind;
        while(i<days.size() && days[i]-7<days[ind]){
            i++;
        }
        b=cost[1]+func(i,days,cost);
        i=ind;
        while(i<days.size() && days[i]-30<days[ind]){
            i++;
        }
        c=cost[2]+func(i,days,cost);
        return dp[ind]=min(a,min(b,c));
    }
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        dp.resize(days.size(),-1);
        return func(0,days,cost);
    }
};