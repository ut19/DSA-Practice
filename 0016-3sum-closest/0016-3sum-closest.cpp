class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int intsum=0;
        int prev=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=nums.size()-1;
          
            while( j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                int diff=abs(target-sum);
                  if(diff==0)return sum;
                if(diff<prev)
                {
                    intsum=sum;
                    prev=diff;
                }
                if(sum<target)
                {
                    j++;
                    while(j<k && nums[j]==nums[j-1])j++;
                }
                else if(sum>target)
                {
                    k--;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
                
            }
        }
        return intsum;
    }
};