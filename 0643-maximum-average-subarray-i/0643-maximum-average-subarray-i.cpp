class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        int n=nums.size();
        for(int i=0;i<k;i++)
        {
            avg=avg+nums[i];
        }
        double prev=avg;
        for(int i=k;i<n;i++)
        {
            prev=prev-nums[i-k]+nums[i];
            avg=max(avg,prev);
        }
        return avg/k;
    }
};