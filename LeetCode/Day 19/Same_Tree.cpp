/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 // Basic first hand solution
 // Pre-order
 // quick solution = 0ms
 
class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(!p && !q)
            return true;
        if (p && q)
        {
            if(p->val == q->val)
            {
                if(isSameTree(p->left,q->left))
                {
                    if(isSameTree(p->right,q->right))
                        return true;
                }
            }
            else
                return false;
        }
        return false;
    }
};

// Recursive & clean solution, easy to recall
// Pre-order
// A bit slow = 4ms

class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(!p && !q)
            return true;
        
        if(p!=NULL && q!=NULL)
        {
            return 
            {
                p->val == q->val && 
                    isSameTree(p->left, q->left) && 
                    isSameTree(p->right, q->right)  
            };
        }
        return false;
    }
};
