class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int p1 = nums[0];
        int p2 = nums[nums[0]]; // fast

        while(p1 != p2){
            p1 = nums[p1];

            p2 = nums[p2];
            p2 = nums[p2];
        }

        p2 = 0;

        while(p1 != p2){
            p1 = nums[p1];
            p2 = nums[p2];
            
        }

        return p1;


        // now 
        
    }
};
