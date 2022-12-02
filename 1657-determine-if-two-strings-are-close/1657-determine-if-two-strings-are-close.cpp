class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<int,int>a,b,ma,mb;
        vector<int>v(26);
        if(word1.size()!=word2.size()){return false;}
        for(auto i:word1){ma[i]++;v[i-'a']++;}
        for(auto i:v){if(i!=0){a[i]++;}}
        vector<int>vc(26);
        for(auto i:word2){mb[i]++;vc[i-'a']++;}
        for(auto i:vc){if(i!=0){b[i]++;}}
        for(auto i:ma){
            if(mb[i.first]==0){return false;}
        }
        for(auto i:a){
            if(b[i.first]!=i.second){
                return false;
            }
        }
        return true;
    }
};