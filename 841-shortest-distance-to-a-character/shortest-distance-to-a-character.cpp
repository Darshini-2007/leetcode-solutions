class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> pos;
        vector<int> a;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                pos.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            int d=INT_MAX;
            for(int j=0;j<pos.size();j++){
                d=min(d,abs(i-pos[j]));
            }
            a.push_back(d);
        }
        return a;
    }
};