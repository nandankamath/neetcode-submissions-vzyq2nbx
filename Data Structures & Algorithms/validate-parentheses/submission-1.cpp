class Solution {
public:
    bool isValid(string s) {
        deque<char> container;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' | s[i] == '{' | s[i] == '['){
                container.push_back(s[i]);
            }else{
                if(container.empty()) return false;
                if(s[i] == ')' && container.back() == '('){
                    container.pop_back();
                } else if(s[i] == '}' && container.back() == '{'){
                    container.pop_back();
                }else if(s[i] == ']' && container.back() == '['){
                    container.pop_back();
                }else{
                    return false;
                }
            }
        }

        if(container.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
