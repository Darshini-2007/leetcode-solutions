class Solution {
public:
    bool isHappy(int n) {
     set<int> seen;
     int c=0;
     while(1){
        string s=to_string(n);
        long long num=0;
        if(seen.contains(n)) break;
        seen.insert(n);
        for(int i=0;i<s.size();i++){
            num+=((s[i]-'0')*(s[i]-'0'));
        }
        n=num;
     }
      return (n==1);   
    }
};