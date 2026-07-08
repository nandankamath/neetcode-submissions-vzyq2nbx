/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map< Node*, Node*> map;

        Node* first_pass = head;
        while(first_pass != nullptr){
            Node* deep_copy = new Node(first_pass->val);
            map[first_pass] = deep_copy;
            first_pass = first_pass->next;
        }

        first_pass = head;

        while(first_pass != nullptr){
            //USE MAP SINCE OTHERWISE U ARE USING POINTERS FROM OG LL
            Node* deep_copy = map[first_pass];
            deep_copy->next = map[first_pass->next];
            deep_copy->random = map[first_pass->random];
            
            first_pass = first_pass->next;
        }

        return map[head];
        
    }
};
