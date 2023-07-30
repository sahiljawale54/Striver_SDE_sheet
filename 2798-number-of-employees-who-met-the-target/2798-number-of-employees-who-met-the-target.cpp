class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int t) {
        int ans = 0;
        for(auto n : hours){
            if(n>= t) ans++;
        }
        return ans;
    }
};