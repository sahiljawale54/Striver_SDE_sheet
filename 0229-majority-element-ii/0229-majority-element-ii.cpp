class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //optimal 
        // moore voting for 2 values
        
        int ele1=INT_MIN , ele2=INT_MIN , cnt1 = 0 ,  cnt2 = 0;
        
        for(int i= 0 ; i< nums.size() ; i++){
            if(cnt1 == 0 && ele2 != nums[i]){
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && ele1 != nums[i]){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;
            else {
                cnt1-- ; cnt2--;
            }
            
        }
        vector<int> ans ;
        cnt1 = 0 , cnt2 = 0;
        for(auto ele : nums){
             if(ele1 == ele) cnt1++;
              if(ele2 == ele) cnt2++;
        }
        int mini = nums.size() /3 +1;
        if(cnt1>=mini) ans.push_back(ele1);
        if(cnt2 >= mini) ans.push_back(ele2);
         return ans;
    }
};