class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"){return num1;}
        if(num2=="0"){return num2;}
        int n1=num1.size(),n2=num2.size();
        int n=n1+n2-1,c=0;
        vector<int>v(n);
        for(int ind=1; ind<=n; ind++){
            int t1=n1-ind,temp=0,t2=n2-1;
            //cout<<ind<<"\n";
            while(t1<n1){
                //cout<<t1<<" "<<t2<<"\n";
                if(t1>=0 && t2>=0){
                    int a=num1[t1]-'0',b=num2[t2]-'0';
                    //cout<<a<<" "<<b;
                    int tmp=a*b;
                    temp+=tmp;
                }
                t1++;
                t2--;
            }
            temp+=c;
            c=temp/10;
            v[ind-1]=temp%10;
        }
        if(c){
            v.push_back(c);
        }
        string ans="";
        for(int i=v.size()-1; i>=0; i--){
            ans+=to_string(v[i]);
        }
        return ans;
    }
};