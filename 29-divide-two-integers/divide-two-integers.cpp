class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

       if(dividend == divisor ) return 1 ; 

       bool negative = (dividend < 0) ^ (divisor < 0);

        long long temp = abs((long long)dividend);
        long long d = abs((long long)divisor);

       long long ans = 0;

       while (temp >= d) {

            int cnt = 0;

            while ((d << (cnt + 1)) <= temp) {
                cnt++;
            }

            temp -= (d << cnt);
            ans += (1LL << cnt);
        }

       if (negative)
            ans = -ans;

        return (int)ans;

        
    }
};