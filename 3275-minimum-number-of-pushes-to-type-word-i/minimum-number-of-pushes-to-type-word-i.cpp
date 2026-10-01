class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int d=n/8;
        int r=n%8;
        return (d+1)*(4*d+r);
    }
};