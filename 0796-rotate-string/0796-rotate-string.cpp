class Solution {
public:
    bool rotateString(string s, string g) {
        //brtue - rotate karke dekh le
        if(s.size() != g.size()) return 0;
        string w = s+s;
        return w.find(g) != string::npos;
    }
};