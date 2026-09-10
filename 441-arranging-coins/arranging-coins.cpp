class Solution {
public:
    int arrangeCoins(int n) {
        int l=1,r=n;
        while(l<=r){
            long m=l+(r-l)/2;
            long coins_needed=m*(m+1)/2;
            if(coins_needed==n) return m;
            else if (coins_needed<n) l=m+1;
            else r=m-1;
        }
        return r;
    }
};