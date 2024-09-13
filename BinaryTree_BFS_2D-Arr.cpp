vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> bfs;
        if(!root)
            return bfs;

        deque<TreeNode*> q;
        q.push_back(root);

        while(!q.empty())
        {
            vector<int> temp;
            int size = q.size();

            for(int i=0; i<size; i++)
            {

            TreeNode* node = q.front();
            q.pop_front();
            temp.push_back(node->val);

            if(node->left)
                q.push_back(node->left);

            if(node->right)
                q.push_back(node->right);
            }
            bfs.push_back(temp);
        }

        return bfs;
    }