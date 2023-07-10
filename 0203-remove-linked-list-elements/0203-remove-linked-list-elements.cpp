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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp= head;
        
        while(temp!=NULL)
        {
            if(head->val==val)
            {
                head=head->next;
            }
            if(temp->next!=NULL && temp->next->val==val){
                if(temp->next->next==NULL)temp->next=NULL;
                else temp->next=temp->next->next;
            }
            else temp=temp->next;
        }
        return head;
    }
};