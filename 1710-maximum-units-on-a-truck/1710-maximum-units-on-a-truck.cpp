class Solution {
public:
    bool static sort_unit(const vector<int>& v1 , const vector<int>& v2)
    {
        return v1[1] > v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),sort_unit);
        int i=0;
        int sum=0;
        while(truckSize>0 && i<boxTypes.size())
        {
            if(boxTypes[i][0] <= truckSize)
            {
                sum += (boxTypes[i][0]*boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else{
                sum += (boxTypes[i][1] * truckSize);
                truckSize = 0;
            }
            i++;
        }
        return sum;
        
    }
};