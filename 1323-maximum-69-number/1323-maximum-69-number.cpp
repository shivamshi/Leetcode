class Solution {
public:
    int maximum69Number (int n) {
        int a=3,i=0,t=-1,tn=n;
        while(n){
            if(n%10==6)
                t=i;
            i++;
            n/=10;
        }
        if(t==-1){return tn;}
        return (tn+(pow(10,t)*3)); 
    }
};