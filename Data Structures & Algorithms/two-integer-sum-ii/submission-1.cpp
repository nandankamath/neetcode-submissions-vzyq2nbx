class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> out;
        int index1 = 0;
        int index2 = numbers.size()-1;
        while(index1 != index2){
            if((numbers[index1] + numbers[index2]) > target ){
                index2--;
            }else if((numbers[index1] + numbers[index2]) < target ){
                index1++;
            }else{
                out = {index1 + 1 , index2 + 1};
                return out;
            }
        }
    }
};
