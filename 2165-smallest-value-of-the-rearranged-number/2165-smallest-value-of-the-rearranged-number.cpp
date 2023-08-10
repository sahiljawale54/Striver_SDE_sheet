class Solution {
public:
    long long smallestNumber(long long num) {
        int neg = 0;
        if(num < 0 ) neg = 1 , num = -num;
        string  s = to_string(num);
        if(neg) sort(s.rbegin() , s.rend());
        else sort(s.begin() , s.end());
        
        int i = 0;
        while(s[i] == '0')  i++;
            
        if(i != s.size()) swap(s[0] , s[i]);
        
        if(neg) return stoll(s) * -1LL;
        return stoll(s) * 1LL;
    }
};