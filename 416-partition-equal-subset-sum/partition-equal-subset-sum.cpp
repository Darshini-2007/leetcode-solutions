class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int ts=0;
        for(int no:nums) ts+=no;
        if(ts%2!=0) return false;
        int tars=ts/2;
        vector<bool> dp(tars+1,false);
        dp[0]=true;
        for(int no:nums){
            for(int cs=tars;cs>=no;--cs){
                dp[cs]=dp[cs]||dp[cs-no];
                if(dp[tars]) return true;
            }
        }
        return dp[tars];
    }
};