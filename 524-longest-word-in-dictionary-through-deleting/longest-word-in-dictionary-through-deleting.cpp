class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string a="";
        for(int i=0;i<dictionary.size();i++){
            int l=0,r=0;
            while(l<s.size() && r<dictionary[i].size()){
                if(s[l]==dictionary[i][r]){
                    l++;
                    r++;
                }
                else l++;
                if(r==dictionary[i].size()){
                    if(a.size()<dictionary[i].size()){
                        a=dictionary[i];
                    }
                    else if(a.size()==dictionary[i].size()){
                        a=min(a,dictionary[i]);
                    }
                }
            }
        }
            return a;
    }
};