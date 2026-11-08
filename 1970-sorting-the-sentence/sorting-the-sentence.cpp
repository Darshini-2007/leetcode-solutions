class Solution {
public:
    string sortSentence(string s) {
        vector<string> r(10,"");
        string a="";
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i])) a+=s[i];
            else r[s[i]-'0']=a,a="",i++;
        } 
        for(int i=0;i<10;i++) if(r[i].size()) a+=r[i]+" ";
        a.pop_back(); 
        return a;
    }
};