class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        /*last is the index of last seated seat.
Loop on all seats, when we met a people, we count the distance from the last.
The final result = max(distance at the beginning, distance in the middle / 2, distance at the end).*/
        int ans = 0 , last = -1, n = s.size();
        
        for(int i =0 ; i< n ; i++){
            if(s[i] == 1){
                ans = last < 0 ? i : max(ans , (i-last)/ 2);
                last = i;
            }
        }
        ans = max(ans , n - last -1 );
        return ans;
    }
};