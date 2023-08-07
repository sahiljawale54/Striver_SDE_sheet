class Solution {
   set<vector<int>> ans;
    void solve(int idx , vector<int> nums){
        if(idx == nums.size()){
            ans.insert(nums);
            return;
        }
        
        for(int j = idx ; j<nums.size() ; j++){
            swap(nums[idx] , nums[j]);
            solve(idx+1 , nums);
            swap(nums[idx] , nums[j]);
        }
        
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       
        solve(0 , nums);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};