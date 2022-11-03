class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>same,diff;
        for(auto i:words){
            if(i[0]==i[1])
                same[i]++;
            else
                diff[i]++;
        }
        int a=0;
        for(auto i:words){
            if(i[0]!=i[1] && diff[i]){
                string t=i;
                reverse(t.begin(),t.end());
                if(diff[t]){
                    a+=4;
                    diff[t]--;
                    diff[i]--;
                }
            }
            else{
                if(same[i]>=2){
                    a+=4;
                    same[i]-=2;
                }
            }
        }
        for(auto i:same){
            if(i.second>0){
                a+=2;
                break;
            }
        }
        return a;
    }
};