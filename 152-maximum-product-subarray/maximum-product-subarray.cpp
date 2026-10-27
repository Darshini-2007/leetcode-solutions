class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int ans=nums[0],maxp=nums[0],minp=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]<0) swap(maxp,minp);
        //     maxp=max(nums[i],maxp*nums[i]);
        //     minp=min(nums[i],minp*nums[i]);
        //     ans=max(ans,maxp);
        // }
        //  return ans;
        int n=nums.size(),a=INT_MIN;
        int pre=0;int su=0;
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(su==0) su=1;
            pre*=nums[i];
            su*=nums[n-i-1];
            a=max(a,max(pre,su));
        }
        return a;
    }
};