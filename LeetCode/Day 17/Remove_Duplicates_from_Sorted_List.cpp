/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode *current=head;

        if(current == NULL)
            return 0;
        else
        {            
            while(current->next)
            {
                if(current->val == current->next->val)
                    current->next = current->next->next;
                else
                    current=current->next;
            }
            return head;
        }
    }
};
