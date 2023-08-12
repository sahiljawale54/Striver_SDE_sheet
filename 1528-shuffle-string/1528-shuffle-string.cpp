class Solution {
public:
    string restoreString(string s, vector<int>& nums) {
        int n = s.size();
        string ans(n , 'o');
        for(int i =0 ; i <  n ; i++){
            ans[nums[i]] = s[i];
        }
        return ans;
       
    }
};