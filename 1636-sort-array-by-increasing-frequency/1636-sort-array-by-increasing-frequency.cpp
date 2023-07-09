class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int ,int> vp;
        
        for(auto n: nums){
            vp[n]++;
        }
        sort(nums.begin() , nums.end() , [&](int a , int b){
        if(vp[a] == vp[b]) return a>b;
        else return vp[a] < vp[b];
    });
       
        return nums;
    }
};