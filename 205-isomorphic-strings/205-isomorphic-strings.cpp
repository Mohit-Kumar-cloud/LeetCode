class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> mp_s;
        map<char,int> mp_t;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp_s[s[i]]!=mp_t[t[i]])
            {
                return false;
            }
            mp_s[s[i]] = i+1;
            mp_t[t[i]] = i+1;
        }
        return true;
    }
};