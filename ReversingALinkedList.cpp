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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)
           return head;
        else if(head->next==nullptr)
           return head;   
        ListNode* temp = head;
        ListNode* suc = head->next;
        ListNode* cur = head;
        cur=head;
        head=suc;
        temp=head;
        suc=head->next;
        temp->next=cur;
        cur->next=nullptr;

        while (suc != nullptr) {
            cur=head;
            head=suc;
            temp=head;
            suc=head->next;
            temp->next=cur;
            
        }

        return head;
    }

};