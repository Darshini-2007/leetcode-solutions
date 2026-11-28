class Solution {
private:
void backtrack(int o,int c,int n,string s,vector<string>& a){
    if(o==c && (o+c)==2*n){
        a.push_back(s);
        return;
    }
    if(o<n){
        backtrack(o+1,c,n,s+'(',a);
    }
    if(c<o){
        backtrack(o,c+1,n,s+')',a);
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> a;
        backtrack(0,0,n,"",a);
        return a;
    }
};