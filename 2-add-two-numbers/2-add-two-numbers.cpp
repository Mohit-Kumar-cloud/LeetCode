/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                int carry = 0;
        ListNode* curr = new ListNode;
        ListNode* ans = curr;
        int sol;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int val1 = 0, val2=0;
            if(l1)
            {
                val1 = l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                val2 = l2->val;
                l2 = l2->next;
            }
            
            curr->next = new ListNode((val1 + val2 + carry)%10);
            curr = curr->next;
            carry = (val1+val2 +carry) >9 ;
        }
       
       return ans->next; 
    }
};