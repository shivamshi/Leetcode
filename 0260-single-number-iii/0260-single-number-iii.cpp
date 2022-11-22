class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(auto i:nums){x=x^i;}
        long t=0,i=1;
        while(t<32){
            if(i & x){break;}
            t++;
            i*=2;
        }
        x=0;
       // cout<<t<<" ";
        t=pow(2,t);
        cout<<t<<" ";
        for(auto i:nums){
            if((i & t)){
                cout<<i<<" ";
                x^=i;
            }
        }
        int a=x;
        for(auto i:nums){
            x=x^i;
        }
        return {a,x};
    }
};