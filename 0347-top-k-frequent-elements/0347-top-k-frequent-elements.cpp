class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mpp;
        
         for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
      vector<pair<int,int>>res;
      for(auto it:mpp)
      {
        res.push_back({it.second,it.first});
      }
      sort(res.begin(),res.end());
        for(auto it=res.rbegin();it!=res.rend();++it)
        {
            ans.push_back(it->second);
            k--;
            if(k==0)break;
        }
        return ans;
    }
};