class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> container;

        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0; i < nums.size(); i++){
            if(!container.contains(nums[i])){
                container[nums[i]] = 1;
            }
        }
        int longest = 1;
        
        //loop thru valid keys
        for(auto const& [key, val] : container){ 
            int current = key + 1;
            int temp = 1;
            
            if(!container.contains(key - 1)){

                while(container.contains(current)){
                    temp++;
                    current++;
                }

                if(temp > longest){
                    longest = temp;
                }
            }
        }
        return longest;
    }
};