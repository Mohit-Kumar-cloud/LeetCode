class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;
        int sum;
        for(int i=0;i<accounts.size();i++)
        {
            sum = accumulate(accounts[i].begin(),accounts[i].end(),0);
            mx = max(mx,sum);
        }
        return mx;
    }
};