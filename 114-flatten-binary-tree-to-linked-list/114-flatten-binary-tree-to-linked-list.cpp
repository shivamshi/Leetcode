class Solution {
public:
    void func(TreeNode *root,TreeNode *prev){
        if(root->left==NULL || root->right==NULL){
            if(root->left==NULL && root->right==NULL){
                root->right=prev;
                return;}
            if(root->left){
                root->right=root->left;
                root->left=NULL;
            }
            func(root->right,prev);
            return ;
        }
        func(root->left,root->right);
        func(root->right,prev);
        TreeNode *temp=root->right;
        root->right=root->left;
        root->left=NULL;
    }
    void flatten(TreeNode* root) {
        if(root==NULL){return;}
        func(root,NULL);
    }
};