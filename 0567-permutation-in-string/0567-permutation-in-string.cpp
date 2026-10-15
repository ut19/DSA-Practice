class Solution {
public:
    bool check( unordered_map<char,int>& m2,unordered_map<char,int>& m1)
    {
        for(auto it: m1)
        {
            if(it.second>m2[it.first])return false;
        }
        return true;
    } 
    bool checkInclusion(string s1, string s2) {
        int low=0;
        int high=s1.size()-1;
        unordered_map<char,int>mpp1;
        for(int i=0;i<s1.size();i++)mpp1[s1[i]]++;
        while(high<s2.size())
        {
            unordered_map<char,int>mpp2;
            for(int i=low;i<=high;i++)mpp2[s2[i]]++;
            if(check(mpp2,mpp1))return true;
            low++;
            high++;
        }
        return false;
    }
};