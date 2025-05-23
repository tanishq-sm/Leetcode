class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }else if(nums[mid]<target)
            {
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans+1;
    }
};
