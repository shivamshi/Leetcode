class Solution {
public:
    TreeNode *func(int l,int r,priority_queue<pair<int,int>>q){
        if(l>r)
            return NULL;
        while(q.size() &&(q.top().second<l || q.top().second>r))
            q.pop();
        TreeNode *temp=new TreeNode(q.top().first);
        int t=q.top().second;
        temp->left=func(l,t-1,q);
        temp->right=func(t+1,r,q);
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        priority_queue<pair<int,int>>q;
        for(int i=0;i<nums.size(); i++)
            q.push({nums[i],i});
        TreeNode * ans=new TreeNode(q.top().first);
        int t=q.top().second;
        ans->left=func(0,t-1,q);
        ans->right=func(t+1,nums.size()-1,q);
        return ans;
    }
    
};