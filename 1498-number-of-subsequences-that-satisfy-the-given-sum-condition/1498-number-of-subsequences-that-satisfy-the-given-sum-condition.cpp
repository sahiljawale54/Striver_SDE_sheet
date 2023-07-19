class Solution {
    long long  m = 1000000007;
    long long binpow(long long a, long long b) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

public:
    int numSubseq(vector<int>& nums, int t) {
        // take each ele & find max till that 
        sort(nums.begin() , nums.end());
        int ans = 0 ;
        int l = 0 , r = nums.size() -1;
        
        while( l <= r){
            if(nums[l] + nums[r] > t) r--;
            else 
                ans = (ans + binpow(2 , r - l++)) % m;
        }
        return ans;
        
    }
};