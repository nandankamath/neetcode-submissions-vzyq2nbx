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
        
        for(int i = 0; i < nums.size(); i++){
                int current = nums[i] + 1;
                int temp = 1;
            if(!container.contains(nums[i] - 1)){

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
