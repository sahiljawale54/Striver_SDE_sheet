class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    int sqrtN = sqrt(n);

    for (int i = 2; i <= sqrtN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<vector<int>> result;

    for (int x = 2; x <= n / 2; x++) {
        int y = n - x;
        if (isPrime[x] && isPrime[y]) {
            vector<int> pair = {x, y};
            result.push_back(pair);
        }
    }

    return result;
    }
};