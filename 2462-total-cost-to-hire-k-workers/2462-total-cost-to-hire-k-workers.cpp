class Solution {
public:
    long long totalCost(vector<int>& nums, int k, int can) {
        priority_queue <long long, vector<long long >, greater<long long>> lq,rq;
        long long i=0,j=nums.size()-1,n=nums.size(),a=0;
        while(i<can){
            lq.push(nums[i]);
            i++;
        }
        while(j>=i && j>=n-can){
            rq.push(nums[j]);
            j--;
        }
        while(i<=j && k>0){
            //cout<<lq.top()<<" "<<rq.top()<<"\n";
            if(lq.top()<=rq.top()){
                a+=lq.top();
                cout<<lq.top()<<" ";
                lq.pop();
                lq.push(nums[i]);
                i++;
            }
            else{
                a+=rq.top();
                cout<<rq.top()<<" ";
                rq.pop();
                if(j>=i){
                    rq.push(nums[j]);
                    j--;
                }
            }
            k--;
        }
        //cout<<k<<" ";
        /*while(rq.size()){
            cout<<rq.top()<<" ";
            rq.pop();
        }*/
        //return a;
        while(k>0){
            //cout<<lq.top()<<" "<<rq.top()<<"\n";
            if(!lq.empty() && (rq.empty() || lq.top()<=rq.top())){
                a+=lq.top();
                cout<<lq.top()<<" ";
                lq.pop();
            }
            else{
                a+=rq.top();
                cout<<rq.top()<<" ";
                rq.pop();
            }
            k--;
        }
        return a;
    }
};