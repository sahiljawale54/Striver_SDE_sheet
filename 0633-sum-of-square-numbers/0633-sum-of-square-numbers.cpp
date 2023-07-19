class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 1) return 1;
        long long a = 0 , b = sqrt(c);
        
        while(a<=b){
            long long int p = (a + b)*(a+b) - 2*a*b;
            if(p == c) return 1;
            if(p > c) b--;
            else a++;
        }
        return 0;
    }
};