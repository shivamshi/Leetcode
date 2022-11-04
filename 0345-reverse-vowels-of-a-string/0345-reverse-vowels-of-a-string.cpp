class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        map<char,int>m;
        m['a']=1;m['e']=1;m['o']=1;m['u']=1;m['i']=1;
        m['A']=1;m['E']=1;m['O']=1;m['U']=1;m['I']=1;
        //cout<<s.size()<<"\n";
        while(i<s.size() && (s[i]==' ' || m[s[i]]==0)){
            i++;
        }
        while(j>=0 && (s[j]==' ' || m[s[j]]==0)){
            j--;
        }
        while(i<j){
            swap(s[i],s[j]);
            //cout<<i<<" "<<j<<"\n";
            i++;j--;
            while(i<s.size() && (s[i]==' ' ||  m[s[i]]==0)){
                i++;
            }
            while(j>=0 && (s[j]==' ' ||  m[s[j]]==0)){
                j--;
            }
        }
        return s;
    }
};