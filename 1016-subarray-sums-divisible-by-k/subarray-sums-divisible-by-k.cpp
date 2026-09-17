class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int pm=0,ans=0;
        vector<int> m(k);
        m[0]=1;
        for(int n:nums){
            pm=(pm+n%k+k)%k;
            ans+=m[pm];
            m[pm]++;
        }
        return ans;
    }
};