class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int a=k;
        while(seen.count(a)){
           a+=k;
        }
        return a;
    }
};