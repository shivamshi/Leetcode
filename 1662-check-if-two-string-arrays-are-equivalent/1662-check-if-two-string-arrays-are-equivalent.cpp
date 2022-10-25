class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string a="",b="";
        for(auto i:w1){
            for(auto j:i){
                a+=j;
            }
        }
        for(auto i:w2){
            for(auto j:i){
                b+=j;
            }
        }
        return a==b;
    }
};