class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int num;
        std::unordered_map<int, int> container;

        for(int i = 0; i < nums.size(); i++){
            if(!container.contains(nums[i])){
                container[nums[i]] = nums[i];
            }else{
                return true;
            }

        }
        return false;

    }
};