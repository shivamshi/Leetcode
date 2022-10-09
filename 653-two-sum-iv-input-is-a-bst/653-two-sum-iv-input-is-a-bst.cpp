class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        queue<TreeNode* >q;
        q.push(root);
        map<int,int>m;
       while(!q.empty()){
            TreeNode *t=q.front();
            if(m[k-(t->val)])
                return true;
            m[t->val]++;
            if(t->right){q.push(t->right);}
            if(t->left){q.push(t->left);}
            q.pop();
        }
        return false;
    }
};