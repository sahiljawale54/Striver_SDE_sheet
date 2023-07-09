class Solution {
    
public:
    string longestPalindrome(string s) {
        //brute o(n3)'
        int n = s.size();
        string ans ="";
        int maxl = 0;
        
        for(int i =0 ; i< n ; i++){
            //odd length 
            int l = i , r = i;
            while(l >= 0 && r <n && s[l] == s[r]){
                if(r - l +1 > maxl){
                    ans = s.substr(l ,r-l+1);
                    maxl = r-l+1;
                }
                l--,r++;
            }
            // evel len
           
            l = i , r = i+1;
            while(l >= 0 && r <n && s[l] == s[r]){
                if(r - l +1 > maxl){
                    ans = s.substr(l ,r-l+1);
                    maxl = r-l+1;
                }
                l--,r++;
            }
        }
        
        return ans;
    }
};