class Solution {
public:
    double pow(double x, long long n) {
        if (n == 0) return 1;
        double half = pow(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }

    double myPow(double x, int n) {
        long long longN = n; 
        if (longN < 0) {
            x = 1 / x;
            longN = -longN;
        }
        return pow(x, longN);
    }
};
