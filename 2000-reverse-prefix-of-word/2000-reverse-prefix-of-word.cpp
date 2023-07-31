class Solution {
public:
    string reversePrefix(string word, char ch) {
        int c = 0 , i = 0;
        for(int i = 0 ; i< word.size() ; i++){
            if(word[i] == ch){
                c = i;
                break;
            }
        }
        reverse(word.begin() , word.begin() + c+1);
        return word;
        
    }
};