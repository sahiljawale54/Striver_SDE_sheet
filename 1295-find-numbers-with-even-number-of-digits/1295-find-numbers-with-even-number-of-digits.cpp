class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(auto n : nums){
            string s = to_string(n);
            if(s.size() % 2 == 0) ans++;
        }
        return ans;
    }
};