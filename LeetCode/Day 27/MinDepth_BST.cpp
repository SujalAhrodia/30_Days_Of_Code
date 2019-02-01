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
    int minDepth(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        
        //check for leaf node
        if(root->left==NULL && root->right==NULL)
            return 1;
        
        //if one of the sub-tree node is NULL
        if(root->left==NULL)
            return minDepth(root->right)+1;
        
        if(root->right==NULL)
            return minDepth(root->left)+1;
        
        //when both sub-tree exists
        return min(minDepth(root->left),minDepth(root->right))+1;
    }
};
