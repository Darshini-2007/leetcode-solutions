class Solution {
public:
    string toHex(int num) {
        unsigned int ournum=num;
        string s;
        char ourarray[17]="0123456789abcdef";
        do{
            s+=ourarray[ournum%16];
            ournum/=16;
        }while(ournum);
        return {s.rbegin(),s.rend()};
    }
};