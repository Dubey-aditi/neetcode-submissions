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
        ListNode* temp = head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(temp!=NULL){
            temp=temp->next;
            curr->next=prev;
            prev= curr;
            curr=temp;
        }
        // temp=prev;
        // while(temp!=NULL){
        //     cout<<temp->val<<" ";
        //     temp=temp->next;
        // }
        return prev;
    }
};
