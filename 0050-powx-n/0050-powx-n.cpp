class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        // binary exponention
        long long nn = n ;
        if(nn<0) nn = -1*nn;
        
        while(nn>0){
            if(nn &1){
                ans = ans*x;
                nn = nn-1;
            }
            else{
                x = x*x;
                nn = nn /2;
            }
        }
        if(n<0) return (double) 1.0 / ans;
        return ans;
        
        
        
        
        
        
        
        /*double ans = 1.0;
         long long pos =n;
        if(n<0) pos = -n;
        for(int i = 0 ; i < pos ; i++){
            ans = ans * x;
        }
        if(n<0) return (double)1/ans;
        return ans;*/
    }
};