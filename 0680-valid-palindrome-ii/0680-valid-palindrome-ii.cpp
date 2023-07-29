class Solution {
    bool ispali(string s , int i , int j ){
        while(i<=j){
            if(s[i] == s[j]) i++,j--;
            else return 0;
        }
        return 1;
    }
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0 , j = n-1;
        
        while(i<=j){
            if(s[i] == s[j]){
                i++,j--;
            }
            else
                return ispali(s,i,j-1) || ispali(s , i+1 , j); 
        }
        return 1;
    }
};