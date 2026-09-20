class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26,0);
        int l=0,ans=0,r=0;
        int maxF=0;
        for(int r=0;r<s.size();r++){
            f[s[r]-'A']++;
            maxF=max(maxF,f[s[r]-'A']);
            while((r-l+1)-maxF>k){
                f[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};