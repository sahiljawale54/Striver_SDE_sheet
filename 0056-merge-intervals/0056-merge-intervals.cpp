class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        int n = inter.size();
        sort(inter.begin() , inter.end());
        
        for(int i = 0 ; i< n ; i++){
            if(ans.empty() || inter[i][0] > ans.back()[1]) ans.push_back(inter[i]);
            else ans.back()[1] = max(ans.back()[1] , inter[i][1]);
        }
        return ans;
      
       /* for( int i = 0, j = i+1 ; i< n ; i++){
            if(inter[i][1] >= inter[j][0]){
                    while(inter[i][1] > inter[j][0]) j++;
                    int start = min(inter[i][0] , inter[j][0]);
                    int end = max(inter[j][1] , inter[j][1]);
                    ans.push_back({start , end});
                    i = j;
             }
            else ans.push_back(inter[i]);
        }
        return ans;*/
    }
};