class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //find max
        int max = piles[0];
        for(int i = 1; i < piles.size(); i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }

        //binary search
        int ans;
        int left = 1;
        int right = max;
        int center = (left + right)/2;
        while(left <= right){
            center = (left + right)/2;
            int count = 0;
            for(int i = 0; i < piles.size(); i++){
                count += ((piles[i]+ center -1) / center);
            }
            if(count <= h ){
                right = center -1;
                ans = center;
            }else{
                left = center + 1;
            }
        }

        return ans;

    }
};
