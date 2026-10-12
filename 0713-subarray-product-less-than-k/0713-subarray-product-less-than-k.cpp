class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i = 0;
        int cnt = 0;
        while (i < nums.size()) {
            if (nums[i] >= k) {
                i++;
                continue;
            }
            long long prev = 1 * nums[i];
            int j = i + 1;
            cnt++;
            while (j < nums.size()) {
                if (nums[j] > k)break;

                prev *= nums[j];
                if (prev < k)
                    cnt++;
                else
                    break;
                j++;
            }
            i++;
        }
        return cnt;
    }
};