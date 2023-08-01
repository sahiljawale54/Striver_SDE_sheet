class Solution {
    
    
    void solve(int curr , int n , int k , vector<int> &ans , vector<vector<int>> &res){
        if(curr == n + 1){
            if(ans.size() == k)res.push_back(ans);
            return;
        }
        
        ans.push_back(curr); // take num
        solve(curr+1 , n , k , ans , res);
        ans.pop_back(); // not take
        solve(curr + 1 , n , k , ans , res);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(1 , n , k , ans  , res);
        return res;
    }
};;