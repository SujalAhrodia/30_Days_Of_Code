/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 
 Condition: 
 A binary tree in which the depth of the two subtrees of every node never differ by more than 1.
 O(n^2) //worst case: skewed tree
 */
class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        else
            return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(TreeNode* root) 
    {        
        if(root==NULL)
            return true;
        else
        {
            int l=height(root->left);
            int r=height(root->right);

            if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right))
                return true;
        }
        return false;
    }
};
