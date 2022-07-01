// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 0;
        long long right = n;
        long long mid;
        while(left <= right)
        {
            mid = (left + right)>>1;
            if(isBadVersion(mid) && !isBadVersion(mid-1))
            {
                return mid;
            }
            else if(isBadVersion(mid))
            {
                right = mid-1;
            }
            else{
                left  = mid+1;
            }
        }
        return 1;
    }
};