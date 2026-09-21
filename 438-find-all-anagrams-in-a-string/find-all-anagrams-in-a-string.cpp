class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int targets=0;
        for(char c:p){
            int x=c-'a';
            targets+=x*x*x;
        }
        int l=0,windows=0;
        vector<int> ans;
        for(int r=0;r<s.size();r++){
            int x=s[r]-'a';
            windows+=x*x*x;
            while(r-l+1>p.size()){
                int y=s[l]-'a';
                windows-=y*y*y;
                l++;
            }
            if(r-l+1==p.size() && windows==targets){
                ans.push_back(l);
            }
        }
        return ans;
    }
};