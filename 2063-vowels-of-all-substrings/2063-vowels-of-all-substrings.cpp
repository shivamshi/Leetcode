class Solution {
public:
    long long countVowels(string word) {
        long long a=0,n=word.size();
        map<char,int>m;
        m['a']++;m['e']++;m['i']++;m['o']++;m['u']++;
        for(int i=0; i<n; i++){
            if(m[word[i]]){
                a+=(n-i)*(i+1);
            }
        }
        return a;
    }
};