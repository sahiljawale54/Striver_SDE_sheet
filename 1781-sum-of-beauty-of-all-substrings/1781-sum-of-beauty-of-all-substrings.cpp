class Solution {
    int beauty(unordered_map<char, int>& mp) {
        int maxi = 0, mini = INT_MAX;
        for (auto p : mp) {
            maxi = max(maxi, p.second);
            mini = min(mini, p.second);
        }
        if(mini == INT_MAX) mini = 0;
        return maxi - mini;
    }

public:
    int beautySum(string s) {
        //unordered_map<char, int> mp;
        int ans = 0;
        int i = 0, j = 0;
        int n = s.size();

       while(i  < n){
           unordered_map<char, int> mp;
           j = i;
           while(j < n){
               mp[s[j]]++;
               ans += beauty(mp);
               j++;
           }
           i++;
       }

        return ans;
    }
};