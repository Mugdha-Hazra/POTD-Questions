vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>r;
        if(root==NULL)
            return r;
        queue<TreeNode*>q;
        q.push(root);
        bool lr=true;
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>a(sz);
            for(int i=0;i<sz;i++)
            {
                auto temp=q.front();
                q.pop();
                int idx=lr?i:(sz-i-1);
                a[idx]=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            lr=!lr;
            r.push_back(a);
        }
        
        return r;
    }
