class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
  
    int maxNum = 0;
    for (int num : nums) {
        
        maxNum = max(maxNum, num);
    }

    vector<int> counts(maxNum + 1, 0);
    for (int num : nums) {
        counts[num]++;
    }

    if (counts[maxNum] != 2)
        return false;

    for (int i = 1; i < maxNum; i++) {
        if (counts[i] != 1)
            return false;
    }

    return true;
    }
};