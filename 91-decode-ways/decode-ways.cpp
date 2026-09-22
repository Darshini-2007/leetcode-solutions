class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1,0);
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0') continue;
            int one=dp[i+1];
            int two=0;
            if(i+1<n && stoi(s.substr(i,2))<=26){
                two=dp[i+2];
            }
            dp[i]=one+two;
        }
        return dp[0];
    }
};