class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() -1;
        int max = 0;

        while(left < right){
            int temp = 0;
            if(heights[left] <= heights[right]){
                temp = heights[left] * (right - left);
            }else{
                temp = heights[right] * (right - left);
            }

            if(temp > max){
                max = temp;
            }

            if(heights[left] <= heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return max;
        
    }
};
