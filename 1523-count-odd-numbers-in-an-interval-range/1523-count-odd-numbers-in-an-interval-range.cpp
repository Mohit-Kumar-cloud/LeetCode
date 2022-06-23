class Solution {
public:
    int countOdds(int low, int high) {
        long long count = (high-low)>>1;
        if(low % 2 != 0 || high %2 !=0)
        {
            count++;
        }
        return count;
    }
};