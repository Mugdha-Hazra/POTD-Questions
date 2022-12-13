 bool isMirror(TreeNode*r1,TreeNode*r2)
    {
        if(r1==NULL&&r2==NULL) return true;
        else if(r1==NULL||r2==NULL) return false;
        else if(r1->val!=r2->val) return false;
        return isMirror(r1->left,r2->right)&&isMirror(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left,root->right);
    }
