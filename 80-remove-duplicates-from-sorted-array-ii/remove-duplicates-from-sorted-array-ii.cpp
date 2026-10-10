class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // unordered_map<int,int> c;
        // int k=0;
        // for(int num:nums){
        //     c[num]++;
        //     if(c[num]<=2){
        //         nums[k]=num;
        //         k++;
        //     }
        // }
        // return k;
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(j==1 || nums[i]!=nums[j-2]){
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};