class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0 && nums[i] <= threshold) {
            int currentLength = 1;
            int j = i + 1;
            while (j < n && nums[j] % 2 != nums[j - 1] % 2 && nums[j] <= threshold) {
                currentLength++;
                j++;
            }
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
    }
};