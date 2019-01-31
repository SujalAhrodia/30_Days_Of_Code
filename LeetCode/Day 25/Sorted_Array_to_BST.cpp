/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 
 Approach:
 
 since array/vector is sorted.
 kind of binary search.
 select middle element at each recursive call and make it root
 recursively check for left and right leaf nodes
 
 */
class Solution {
public:
    TreeNode* BST(vector<int>& nums, int start, int end)
    {
        if(start>end)
            return NULL;
        
        int middle= start + (end-start)/2;

        TreeNode* root = new TreeNode(nums[middle]);

        root->left = BST(nums, start, middle-1);
        root->right = BST(nums, middle+1, end);
            
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return BST(nums,0,nums.size()-1);
    }
};
