class Solution {
public:
    long long int BS(int x){
        int s=0;
        int e=x/2;
        long long int mid= s+(e-s)/2;
        long long int ans=-1;
        
        while(s<=e){
            
            long long int  sq=mid*mid;
            if(sq==x){
                return mid;
            }
            else if(sq<x){
                ans= mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return BS(x);
    }
};
