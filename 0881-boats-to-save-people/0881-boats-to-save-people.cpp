class Solution {
public:
    int numRescueBoats(vector<int>& peps, int l) {
        int ans = 0;
        sort(peps.begin() , peps.end());
        int n = peps.size() , i = 0 , j = n -1;
        
        while( i<=j){
            int rem = l - peps[j];
            j--; ans++;
            if( i <= j  && rem >= peps[i]) i++;
        }
        return ans;
        
    }
};