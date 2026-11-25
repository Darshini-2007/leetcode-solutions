class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        bool prev=false;
        for(int i=0;i<s;i++){
            if(flowerbed[i]) prev=true;
            else{
                if(!prev && (i+1==s || flowerbed[i+1]==0)){
                    n--;
                    prev=true;
                }else prev=false;
            }
        }
        return n<=0;
    }
};