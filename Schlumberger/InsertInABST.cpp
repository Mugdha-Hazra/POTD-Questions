TreeNode* insertIntoBST(TreeNode *node, int val) {
		if(node==NULL)
        { TreeNode *newNode=new TreeNode(val);
            return newNode;
        }
        if(val<node->val)
        node->left=insertIntoBST(node->left,val);
        else if(val>node->val)
        node->right=insertIntoBST(node->right,val);
        return node;
	}
