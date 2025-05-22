class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        //counting
        for(int num: nums) {
            count[num]++;
        }

        //storing in pair
        vector<pair<int, int>> ans;
        for(auto& p: count) {
            ans.push_back({p.second, p.first});
        }

        //sorting in descending
        sort(ans.rbegin(), ans.rend());

        //top k
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(ans[i].second);
        }
        return result;
    }
};