class Solution {
public:
    string reverseWords(string s) {
        // starting se word ko lo re ke end mai add;
        
        string ans ="";
        int n = s.size();
        int i = 0 , j;
        
        while( i < n){
            //remove splace strt se 
            while(i< n && s[i] == ' ') i++;
            if(i >= n) break; //world__ , space aayega
            j = i+1;
            // j ko word ke baad leke jo
            while(j< n && s[j] != ' ') j++;
            
            string w = s.substr(i , j-i);
            if(ans.size() == 0) ans = w;
            else ans = w + " " + ans;
            i = j+1;
            
        }
        return ans;
    }
};