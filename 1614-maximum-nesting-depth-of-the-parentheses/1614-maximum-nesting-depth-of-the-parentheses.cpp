class Solution {
public:
    int maxDepth(string s) {
        int ans= 0 , br= 0;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i] == '(') br++;
            else if(s[i] == ')') br--;
            ans = max(ans , br);
        }
        return ans;
    }
};