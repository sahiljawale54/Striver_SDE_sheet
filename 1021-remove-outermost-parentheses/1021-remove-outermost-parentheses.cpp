class Solution {
public:
    string removeOuterParentheses(string s) {
        //1st fail
        
        int cnt = 0;
        string ans = "";
        for(auto c : s){
            if(c == '(' && cnt++ > 0) ans+=c;
            if(c == ')' && cnt-- > 1) ans+=c;
        }
        return ans;
    }
};