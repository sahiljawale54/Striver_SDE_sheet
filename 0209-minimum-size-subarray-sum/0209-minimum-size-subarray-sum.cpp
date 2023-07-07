class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      
        int  i =0, j = 0;
        int ans = INT_MAX;;
        int sum = 0;
        
        while( j< nums.size()){
            sum = sum + nums[j];
            if(sum < target) j++;
            
            else if(sum >= target){
                ans = min(ans , j-i+1);
                // min chaiye so 
                while(sum>=target){
                    ans = min(ans , j-i+1);
                    sum = sum - nums[i];
                    i++;
                }
                j++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};