class Solution {
public:
    int func(long long n){
        int t=0;
        while(n){
            t+=n%10;
            n=n/10;
        }
        return t;
    }
    long long makeIntegerBeautiful(long long n, int tar) {
        long long a=n,i=1;
        int t=func(n);
        while(t>tar){
     //       cout<<n<<" ";
            i*=10;
                long long temp=n%i;
                n+=(i-temp);
                t=func(n);   
        }
       // cout<<"\n"<<n<<"\n";
        return n-a;
    }
};