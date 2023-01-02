class Solution {
public:
    vector<int>ans;
    void func(int temp,int n){
        if(temp>n){return ;}
        ans.push_back(temp);
        func(temp*10,n);
        if(temp%10!=9){
            temp++;
            func(temp,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        func(1,n);
        return ans;
    }
};