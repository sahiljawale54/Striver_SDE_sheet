class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int minDifference = INT_MAX;
        for (int i = 1; i < n; i++) {
            int diff = nums[i] - nums[i - 1];
            minDifference = min(minDifference, diff);
        }

        return minDifference;
    }
};