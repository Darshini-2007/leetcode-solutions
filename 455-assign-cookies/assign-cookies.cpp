class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();
        if(n==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int maxnum=0;
        int cookieIndex=n-1;
        int childIndex=g.size()-1;
        while(cookieIndex>=0 && childIndex>=0){
            if(s[cookieIndex]>=g[childIndex]){
                maxnum++;
                cookieIndex--;
                childIndex--;
            }
            else{
                childIndex--;
            }
        }
        return maxnum;
    }
};