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
        
        while(tail != nullptr){
            ListNode* temp = head->next;
            head->next = tail;
            tail = tail->next;
            head = head->next;
            head->next = temp;
            head = head->next;
           


        // 1 2 3 4| 5 6 7
        // H T        T  



            
        }



        // 1 2 3 4 5 6 7
        //       P S     F

    }
};
