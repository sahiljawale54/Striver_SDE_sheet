class Solution {
public:
    string frequencySort(string s) {
        //phele map phir vector of pair bhot spae lega
        // so phele in vet of pair 
        
        vector<pair<int , char>> vp(123 , {0,0}); // freq , char asci
        
        for(auto ch : s){
            vp[ch] = {vp[ch].first+1 , ch};
        }
        sort(vp.begin() , vp.end()); 
        
        string ans = "";
        for(auto pai : vp){
            ans = string(pai.first , pai.second) + ans;
        }
        return ans;
    }
};