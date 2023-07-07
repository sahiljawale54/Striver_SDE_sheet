class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int i =0, j= 0;
        int ans = 0;
        int cnt = 0;
        
        while(j<nums.size()){
            //calculation
            if(nums[j] == 0) cnt++;
            
            if(cnt < 2){
                ans = max(ans , j-i+1);
                j++;
            }
            else if(cnt >= 2){
                while(cnt >= 2){
                    if(nums[i] == 0) cnt--;
                    i++;       
                 }
                j++;
            }      
        }
        return ans -1;
            
   }
};