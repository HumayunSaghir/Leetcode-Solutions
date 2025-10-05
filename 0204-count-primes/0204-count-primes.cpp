class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1){
            return 0;
        }
        vector<bool> primes(n + 1, true);
        primes[0] = false;
        primes[1] = false;
        int count = 0;
        for(int i = 2; i < n; i++){
            if(primes[i]){
                count++;
                for(int j = 2 * i; j < n; j += i){
                    primes[j] = false;
                }
            }
        }
        return count;
    }
};