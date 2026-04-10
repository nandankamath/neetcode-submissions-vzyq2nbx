class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        std::unordered_map< std::string, vector<string>> container;
        vector<string> sorted;


        //fill the hashmap
        //each index is earliest index of new 
        for(int i = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());\

            if(!container.contains(key)){
                sorted.push_back(key);
            }
            container[key].push_back(strs[i]);

        }


        for(int i = 0; i < sorted.size(); i++){
            
            output.push_back(container[sorted[i]]);
        }

        return output;
    }
};
