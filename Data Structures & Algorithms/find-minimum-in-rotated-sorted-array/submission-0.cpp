class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size() - 1;
        int center = (left + right)/2;
        while(left < right){
            center = (left + right)/2;
            if(nums[center] > nums[right]){ //higher hill
                left = center + 1;
            }else {
                right = center;
            }
        }

        return nums[left];
        
    }
};
    // |
//[3,4,5,6,1,2]
//[4,5,0,1,2,3]
