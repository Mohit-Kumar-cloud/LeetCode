class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double s = accumulate(salary.begin()+1,salary.end()-1,0);
        double avg  = s/(salary.size()-2);
        return avg;
    }
};