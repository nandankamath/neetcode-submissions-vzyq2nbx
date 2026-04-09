class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> container;

        for(int i = 0; i < s.size(); i++){
            if(!container.contains(s[i])){
                container[s[i]] = 1;
            }else{
                container[s[i]]++;
            }
        }

        for(int i = 0; i < t.size(); i++){
            if(!container.contains(t[i])){
                return false;
            }else{
                container[t[i]]--;
            }
        }

        for(int i = 0; i < s.size(); i++){
            if(container[s[i]] != 0){
                return false;
            }
        }
        return true;
        
    }
};
