/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 
 Approach:
 - calculate diff bteween sum and root value
 - if diff=0 and it is the leaf node; true
 - else, check for either of the sub-trees
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if(root==NULL)
            return false;
        else
        {
            //first solution - a bit slower
            int rem_sum = sum-root->val;
            if(rem_sum == 0 && !root->left && !root->right)
                return true;
            else
            {
                return (hasPathSum(root->left, rem_sum) || hasPathSum(root->right, rem_sum));
            }
            
            //second solution: faster if you don't store the difference
            /*
            if(sum-root->val == 0 && !root->left && !root->right)
                return true;
            else
            {
                return (hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val));
            }
            */
        }
    }
};
