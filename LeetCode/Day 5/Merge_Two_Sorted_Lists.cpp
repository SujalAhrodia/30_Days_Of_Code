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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {   
        ListNode *head = NULL;
        ListNode * curr = NULL;
        
        if(!l1 && !l2)
            return NULL;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        while(l1 && l2)
        {
            if(head == NULL)
            {
                if(l1->val<=l2->val)
                {
                    head = curr = l1;
                    l1 = l1->next;
                }
                else
                {
                    head = curr =l2;
                    l2 =l2->next;
                }
            }
            else
            {
                if(l1->val <= l2->val)
                {
                    curr->next =l1;
                    curr = l1;
                    l1 = l1->next;
                }
                else
                {
                    curr->next = l2;
                    curr = l2;
                    l2 = l2->next;
                }
            }
        }
        if(l1)  
            curr->next =l1;
        if(l2)
            curr->next =l2;
            
        return head;
    }
};
