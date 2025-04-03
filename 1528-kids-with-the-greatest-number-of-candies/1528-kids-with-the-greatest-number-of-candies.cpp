class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxVal = INT_MIN;
        vector<bool> result(candies.size());

        for(int num : candies) {
           if(num > maxVal) {
                maxVal = num;
           } 
        }

        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maxVal) {
                result[i] = true;
            }
            else {
                result[i] = false;
            }
        }

        return result;
    }
};