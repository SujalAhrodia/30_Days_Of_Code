/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 
Approach:
-push root in a queue
-maintain a queue for each level
-check if another level exists, by checking the leaf nodes
-If yes, push them into queue
-push current level value in another vecotr and pop the element from queue
-insert this level vector in your vector<vector<int>>
 */
class Solution 
{
    public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> ans;

        if(root==NULL)    
            return ans;
            
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {   
            vector<int> level;
            int length= q.size();

            for(int i=0; i<length; i++)
            {
                auto a=q.front();
                
                if(a->left)
                    q.push(a->left);
                if(a->right)
                    q.push(a->right);
                
                level.push_back(a->val);
                q.pop();
            }
            ans.insert(ans.begin(), level);
        }
        return ans; 
    }
};
