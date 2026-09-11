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
        // ListNode* temp = head;
        // int count = 0;
        // while(temp!=nullptr){
        //     count++;
        //     temp = temp->next;
        // }
        // count=count-n;
        // if(count==0){
        //     return head->next;
        // }
        // int count1 =0;
        // ListNode* temp1 = head;
        // ListNode* prev = nullptr;
        // while(temp1!=nullptr){
        //     if(count1==count){
        //         prev->next = prev->next->next;
        //     }
        //     else{
        //         prev = temp1;
        //         temp1 = temp1->next;
        //     }
        //     count1++;
        // }
        // return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;
        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }
        while(fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;        
        return dummy.next;
    }
};