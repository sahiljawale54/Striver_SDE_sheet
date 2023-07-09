class Solution {
public:
    int romanToInt(string s) {
        map<char , int> v = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };
        
        int res = v[s[s.size() - 1]];
        
        for(int i = s.size()-2 ; i>=0 ; i--){
            if(v[s[i]] < v[s[i+1]]) res-=v[s[i]];
            else res+= v[s[i]];
        }
        return res;
    }
};