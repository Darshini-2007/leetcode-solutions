class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> f;
        string word="";
        int big=-1;
        for(char c:paragraph){
            if(isalpha(c)){
                word+=tolower(c);
            }
            else{
                if(word!=""){
                    f[word]++;
                    word="";
                }
            }
        }
        if(word!="") f[word]++;
        for(auto pair:f){
            if(pair.second>big && find(banned.begin(),banned.end(),pair.first)==banned.end()){
                word=pair.first;
                big=pair.second;
            }
        }
        return word;
    }
};