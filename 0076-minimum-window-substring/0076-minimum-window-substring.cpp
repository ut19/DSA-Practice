class Solution {
public:
    bool check(unordered_map<char,int>& h,unordered_map<char,int>&n)
    {
        for(auto it : n)
        {
            if(it.second>h[it.first])return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(s.size()<t.size())return "";
        int low=0;
        int res=INT_MAX;
        int start;
        int high=0;
        unordered_map<char,int>present;
        unordered_map<char,int>needed;
        for(int i=0;i<t.size();i++)
        {
            needed[t[i]]++;
        }
        for(high=0;high<s.size();high++)
        {
            present[s[high]]++;
            while(check(present,needed))
            {
                int len=high-low+1;
                if(res>len)
                {
                    res=len;
                    start=low;
                }
                present[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX)return "";
        return s.substr(start,res);
    }
};