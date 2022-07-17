/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        long long int left = 0;
        long long int right = mountainArr.length()-1;
        long long int len = mountainArr.length();
        int peak = 0;
        while(left<=right)
        {
            int mid = (left+right)>>1;
            int m = mountainArr.get(mid);
            int ml = mid<=0?mountainArr.get(0): mountainArr.get(mid-1);
            int mr = mid>=len?mountainArr.get(len-1):mountainArr.get(mid+1);
            
            if(ml<=m && mr<=m)
            {
                cout<<mid<<endl;
                peak = mid;
                cout<<peak;
                break;
            }
            else if(m < ml)
            {
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        
        int ll = 0;
        int lr = peak;
        int rl = peak+1;
        int rr  = mountainArr.length()-1;
        // lets try without hashmap other wise get calls can be reduced by using map in loop used above
        while(ll <= lr)
        {
            int mid = (ll + lr)>>1;
            int val = mountainArr.get(mid);
            if(val == target)
            {
                return mid;
            }
            else if (target > val)
            {
                ll = mid+1;
                cout<<endl<<left;
            }
            else{
                lr = mid-1;
            }
        }
        
        while(rl <= rr)
        {
            int mid = (rl + rr)>>1;
            int val = mountainArr.get(mid);
            if(val == target)
            {
                return mid;
            }
            else if (target < val)
            {
                rl = mid+1;
            }
            else{
                rr = mid-1;
            }
        }
        
        return -1;
        
    }
};