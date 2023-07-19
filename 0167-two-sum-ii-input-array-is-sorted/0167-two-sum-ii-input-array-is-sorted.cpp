class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int> ans(2);
        
        int i = 0 , j = nums.size() -1;
        
        while( i < j){
            int sum = nums[i] + nums[j];
            if(sum == t) {
                ans[0] = i+1;
                ans[1] = j+1;
                return ans;
            }
            if(sum < t) i++;
            else j--;
        }
        return {};
    }
};