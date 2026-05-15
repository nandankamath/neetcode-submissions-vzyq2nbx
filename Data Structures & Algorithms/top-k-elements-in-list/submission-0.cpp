class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> container;
        vector<int> no_duplicates;
        vector<int> frequency;

        for(int i = 0; i < nums.size(); i++){
            if(container.contains(nums[i])){
                container[nums[i]]++;
            }else{
                container[nums[i]] = 1;
                no_duplicates.push_back(nums[i]);
            }
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for(int i = 0; i < no_duplicates.size(); i++){
            buckets[container[no_duplicates[i]]].push_back(no_duplicates[i]);
        }

        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;


        
        
    }
};
