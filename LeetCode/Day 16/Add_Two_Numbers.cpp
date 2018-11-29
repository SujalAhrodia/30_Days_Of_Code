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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0, sum=0;
        ListNode *result = new ListNode(0);
        ListNode *head = result;
        
        while(l1 || l2 || carry)
        {
            //adding the values if it exists plus the carry
            sum = (l1 ? l1->val:0) + (l2 ? l2->val:0) + carry;
            carry = sum/10;
            
            //adding to the result
            result->next = new ListNode(sum%10);
            result = result->next;
            
            //checking if l1 and l2 exists fro traversal
            l1= l1 ? l1->next: l1; 
            l2= l2 ? l2->next: l2;
        }
        return head->next;
    }
};
