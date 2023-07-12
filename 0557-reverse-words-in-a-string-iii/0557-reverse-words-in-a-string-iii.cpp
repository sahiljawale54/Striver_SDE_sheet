class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        
        int i =0 , j = 0;
        
        while(i < n){
            //j ko space tk leke ja 
            while(j < n && s[j] != ' ') j++;
            string w = s.substr(i , j-i);
            reverse(w.begin() , w.end());
            if(ans.size() == 0) ans = w;
            else ans = ans + " " + w;
            i = j+1;
            j++;
        }
        
        return ans;
    }
};