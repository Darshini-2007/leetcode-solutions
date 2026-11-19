class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;++i){
            if(n%i==0){
                string sbs=s.substr(0,i);
                string rep="";
                for(int j=0;j<n/i;++j){
                    rep+=sbs;
                }
                if(rep==s) return true;
            }
        }
        return false;
    }
};