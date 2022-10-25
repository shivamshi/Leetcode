class Solution {
public:
    int partitionString(string s) {
        map<char,int>m,t;
        int i=0,a=0;
        while(i<s.size()){
            if(m[s[i]]){
                a++;
                m=t;
            }
            m[s[i]]++;
            i++;
        }
        return a+1;
    }
};