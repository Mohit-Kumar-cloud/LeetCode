class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        bool flag = false;
        int count = 0;
        for(auto x:mp)
        {
            if(x.second %2 == 0 )
            {
                count += x.second;
            }
            else{
                flag = true;
                count += x.second-1;
            }
        }
        if(flag)
        {
            count++;
        }
        return count;
    }
};