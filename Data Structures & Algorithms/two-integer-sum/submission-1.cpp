class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> container;
        std::vector<int> output;

        for(int i = 0; i < nums.size(); i++){
            
            container[nums[i]] = i;
            
        }

        for(int i = 0; i < nums.size(); i++){
            int partial_sum = target - nums[i];
            if(container.contains(partial_sum) && i != container[partial_sum]){
                int partial_index = container[partial_sum];
                output = {i, partial_index};
                return output;
            }
        }
        
    }
};
