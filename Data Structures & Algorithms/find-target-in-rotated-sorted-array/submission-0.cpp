class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int center = (left+right)/2;

        while (left < right){
            center = (left+right)/2;
            if(nums[center] < nums[right] && target <= nums[right] && target > nums[center]){
                left = center + 1;
            } else if(nums[center] > nums[right] && (target > nums[center] || target <= nums[right])){
                left = center + 1;
            } else{
                right = center;
            }

        }

        //[3,4,5,6,1,2]

        if(nums[left] == target){
            return left;
        }else{
            return -1;
        }
        
    }
};
