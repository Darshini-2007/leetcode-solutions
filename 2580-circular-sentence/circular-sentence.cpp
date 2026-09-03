class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.size();
        if(sentence[0]!=sentence[n-1]){
            return false;
        }
        char a,b;
        for(int i=0;i<n;i++){
            if(sentence[i]==' '){
                 a=sentence[i-1];
                 b=sentence[i+1];
            }
            if(a!=b) return false;
        }
        return true;
    }
};