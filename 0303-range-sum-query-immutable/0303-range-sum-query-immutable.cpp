class NumArray {
public:
    vector<int>prefixa;
   
    NumArray(vector<int>& nums) {
         prefixa.push_back(0);
        prefixa[0]+=nums[0];
        for(int i=1;i<nums.size();i++)
                {int sum=nums[i]+prefixa[i-1];
                prefixa.push_back(sum);}
    }
    
    int sumRange(int left, int right) {
        if(left!=0)return prefixa[right]-prefixa[left-1];
        return prefixa[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */