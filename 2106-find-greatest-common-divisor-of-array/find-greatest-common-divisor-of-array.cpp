class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        return gcd(mx,min);
    }
};