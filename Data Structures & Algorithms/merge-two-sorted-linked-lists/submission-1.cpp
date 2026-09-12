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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }

        if(list1->val<=list2->val){
            dummy->next = list1;
        }else{
            dummy->next = list2;
        }

        while(temp1 && temp2){
            if(temp1->val<=temp2->val){
                temp->next= temp1;
                temp1=temp1->next;
            }else{
                temp->next= temp2;
                temp2=temp2->next;
            }
            temp=temp->next;
        }

        if(temp1){
            temp->next=temp1;
        }
        if(temp2){
            temp->next=temp2;
        }

        return dummy->next;
    }
};
