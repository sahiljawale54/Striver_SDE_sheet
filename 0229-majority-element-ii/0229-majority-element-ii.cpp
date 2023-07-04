class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> res;
        
        for(int ele : nums) {
            mp[ele]++;
        }
        for(auto it : mp){
            if(it.second > nums.size() /3) res.push_back(it.first);
        }
        return res;
        
    }
};