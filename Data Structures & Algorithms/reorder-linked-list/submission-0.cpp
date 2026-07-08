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
    void reorderList(ListNode* head) {
        ListNode* slowptr = head;
        ListNode* fastptr = head->next;

        while(fastptr != nullptr && fastptr->next != nullptr){
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }
        ListNode* tail = slowptr->next;
        slowptr->next = nullptr;
        ListNode* next_node = tail->next;
        ListNode* prev = nullptr;

        while(tail != nullptr){
            tail->next = prev;
            prev = tail;
            tail = next_node;
            next_node = next_node->next;
        }
        tail = prev;
        
        bool arb = true;
        while(tail != nullptr){
            if(arb){
                ListNode* node = new ListNode(tail->val, head->next);
                head->next = node;
                head = head->next;
                tail = tail->next;
                arb = false;
            }else{
                head = head->next;
                arb = true;
            }
        }



        // 1 2 3 4 5 6 7
        //       P S     F

    }
};
