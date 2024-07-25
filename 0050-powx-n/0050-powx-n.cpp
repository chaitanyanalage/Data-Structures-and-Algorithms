class Solution {
public:
    double myPow(double x, int n) {
        
        long long N = n;
        //base case
        if(N == 0) {
            return 1;
        }
        if(N == 1) {
            return x;
        }
        if(N < 0) {
            x = 1/x;
            N = -N;
        }

        //recursion
        double ans = myPow(x, N/2);

        if(N%2 == 0) {
            return ans * ans;
        }
        else {
            return x * ans * ans;
        }
    }
};