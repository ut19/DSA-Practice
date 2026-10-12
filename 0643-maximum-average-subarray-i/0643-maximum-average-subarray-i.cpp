class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0,high=k;
        long double sum=0;
        for(int i=0;i<high;i++)
        {
            sum+=nums[i];
        }
        double res=sum/(double)k;
        while(high<nums.size())
        {
            sum+=nums[high];
            sum-=nums[low];
            high++;
            low++;
            double a=sum/k;
            res=max(res,a);
        }
        return res;
    }
};