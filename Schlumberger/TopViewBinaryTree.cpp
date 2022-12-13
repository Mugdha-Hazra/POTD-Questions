 vector<int> topView(Node *root)
    {
        vector<int>v;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int hd=temp.second;
            Node *node=temp.first;
            if(mp[hd]==0)
            {
                mp[hd]=node->data;
            }
            if(node->left)
            q.push({node->left,hd-1});
            if(node->right)
            q.push({node->right,hd+1});
        }
        for(auto x:mp)
        {
            v.push_back(x.second);
        }
        return v;
    }
