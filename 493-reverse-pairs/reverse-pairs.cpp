class Solution {
public:
    int reversePairs(vector<int>& nums) {
        // int n=nums.size();
        // int c=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<i;j++){
        //         if(nums[j]>nums[i]*2LL) c++;
        //     }
        // }
        // return c;
        return mergesort(nums, 0, nums.size() - 1);
    }

private:
    int countPairs(vector<int>& nums, int l, int m, int h) {
        int r = m + 1;
        int c = 0;
        for (int i = l; i <= m; i++) {
            while (r <= h && (long long)nums[i] > 2LL * nums[r]) {
                r++;
            }
            c += (r - (m + 1));
        }

        return c;
    }

    void merge(vector<int>& nums, int l, int m, int h) {
        vector<int> temp;
        int left = l, right = m + 1;

        while (left <= m && right <= h) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            }
            else {
                temp.push_back(nums[right++]);
            }
        }
        while (left <= m) temp.push_back(nums[left++]);
        while (right <= h) temp.push_back(nums[right++]);
        for (int i = l; i <= h; i++) {
            nums[i] = temp[i - l];
        }
    }

    int mergesort(vector<int>& nums, int l, int h) {
        if (l >= h)
            return 0;
        int m = (l + h) / 2;
        int c = 0;
        c += mergesort(nums, l, m);
        c += mergesort(nums, m + 1, h);
        c += countPairs(nums, l, m, h);
        merge(nums, l, m, h);
        return c;
    }
};