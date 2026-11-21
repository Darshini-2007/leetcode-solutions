class Solution {
public:
    int longestPalindrome(string s) {
        int oddfreqcount=0;
        unordered_map<char,int> freqMap;
        for(char c:s){
            freqMap[c]++;
            if(freqMap[c]%2==1) oddfreqcount++;
            else oddfreqcount--;
        }
        if(oddfreqcount>0) return s.size()-oddfreqcount+1;
        else return s.size();
    }
};