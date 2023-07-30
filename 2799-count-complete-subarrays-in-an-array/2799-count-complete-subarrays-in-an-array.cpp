class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
         int n = nums.size() , k = unordered_set<int>(nums.begin() , nums.end()).size();
        int ans = 0;
        
        for(int i = 0 ; i< n ; i++){
            unordered_set<int> curr;
            
            for(int j = i ; j< n ; j++){
                curr.insert(nums[j]);
                if(k == curr.size()) ans++;
            }
        }
        return ans;
    }
}; 