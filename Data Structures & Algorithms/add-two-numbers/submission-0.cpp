class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // use l1 to store sum;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* prev = nullptr; 
        bool carry = 0;
        
        while(p1 != nullptr && p2 != nullptr){
            int sum = 0;
            if(carry){
                sum = (p1->val + p2->val + 1);
            }else{
                sum = (p1->val + p2->val);
            }

            p1->val = sum % 10;

            if(sum > 9){
                carry = 1;
            }else{
                carry = 0;
            }

            prev = p1;     
            p1 = p1->next;
            p2 = p2->next;
        }

        if(p1 == nullptr && p2 != nullptr){
            prev->next = p2; 
            p1 = p2;         
            
        }

        while(p1 != nullptr){
            int sum = 0;
            if(carry){
                sum = (p1->val + 1);
            }else{
                sum = (p1->val);
            }

            p1->val = sum % 10;

            if(sum > 9){
                carry = 1;
            }else{
                carry = 0;
            }
            
            prev = p1;     
            p1 = p1->next;
        }

        if(carry){
            
            ListNode* carryNode = new ListNode(1, nullptr); 
            prev->next = carryNode;
        }

        return l1;
    }
};