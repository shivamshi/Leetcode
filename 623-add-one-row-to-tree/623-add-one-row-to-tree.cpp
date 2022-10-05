class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        if(root==NULL){return NULL;}
        if(d==1){
            TreeNode*ans=new TreeNode(val);
            ans->left=root;
            return ans;
        }
        if(d>2){
            addOneRow(root->left,val,d-1);
            addOneRow(root->right,val,d-1);
            return root;
        }
        TreeNode* l=root->left,*r=root->right;
        root->left=new TreeNode(val);
        root->right=new TreeNode(val); 
        root->left->left=l;
        root->right->right=r;
        return root;
    }
};