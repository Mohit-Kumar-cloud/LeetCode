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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp;
        temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
        int num = count - n;
        temp = head;
        if(count<=1)
        {
            return NULL;
        }
        else if(count == 2)
        {
           if(n==1)
           {
               temp->next = temp->next->next;
               return temp;
           }
            else{
                return temp->next;
            }
        }
        else{
        cout<<num<<endl;
            if(num==0)
            {
                return temp->next;
            }
        for(int i=0;i<num-1;i++)
        {
            temp = temp->next;
        }
        cout<<temp->val;
        temp->next = temp->next->next;
        return head;
        }
       
        
    }
};