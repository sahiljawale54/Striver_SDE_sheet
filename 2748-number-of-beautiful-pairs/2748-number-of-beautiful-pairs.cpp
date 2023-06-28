class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int res=0,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            string s=to_string(nums[i]);
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(s[0]-'0',nums[j]%10)==1)
                {
                    res++;
                }
            }
        }    
        return res;
    }
};