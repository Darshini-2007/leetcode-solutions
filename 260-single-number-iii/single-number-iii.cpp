class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor_all=0;
        vector<int> ans;
        for(int num:nums){
            xor_all^=num;
        }
        long long m=xor_all & -xor_all;
        int f=0;
        int s=0;
        for(int num:nums){
            if(num & m){
                f^=num;
            }
            else s^=num;
        }
        ans.push_back(f);
        ans.push_back(s);
        return ans;
    }
};