class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //get products of everything to the left
        //and everything to the right
        vector<int> out(nums.size()),left(nums.size()),right(nums.size());
        left[0] = 1;
        right[nums.size()-1] = 1;

        for(int i = 1; i < nums.size(); i++){
            left[i] = left[i-1] * nums[i-1];
        }
        for(int i = nums.size()-2; i >= 0; i--){
            right[i] = right[i+1] * nums[i+1];
        }

        for(int i = 0; i < nums.size(); i++){
            out[i] = right[i] * left[i];
        }
        return out;

    }
};
