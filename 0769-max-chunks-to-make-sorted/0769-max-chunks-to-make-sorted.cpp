class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int t=-1,a=0;
        for(int i=0; i<arr.size(); i++){
            t=max(t,arr[i]);
            if(t==i)
                a++;
        }
        return a;
    }
};