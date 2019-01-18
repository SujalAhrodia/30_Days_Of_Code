/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        int maxD=0;
        if(root == NULL)
            return 0;
        else
        {
            maxD = max(maxDepth(root->left),maxDepth(root->right))+1;
            
            /*
            Another way but same running time
            int m1=maxDepth(root->left);
            int m2=maxDepth(root->right);
            maxD=max(m1,m2)+1;            
            */
        }
        return maxD;
    }
};
