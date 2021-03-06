class Solution {
public:
        int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int  n = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if(i+1 < s.length())
            {
                if(mp[s[i]] >= mp[s[i+1]])
                {
                    n+=mp[s[i]];
                }
                else{
                    n+=(mp[s[i+1]] - mp[s[i]]);
                    i++;
                }
            }
            else{
                n+=mp[s[i]];
            }
        }
        return n;
    }
};