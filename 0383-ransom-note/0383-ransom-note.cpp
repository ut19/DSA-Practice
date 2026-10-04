class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(int i=0;i<ransomNote.size();i++)
        {
            mpp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            mpp2[magazine[i]]++;
        }
            for(auto it: mpp1)
            {
                char check=it.first;
                if(mpp1[check]>mpp2[check])return false;
            }
            return true;
    }
};