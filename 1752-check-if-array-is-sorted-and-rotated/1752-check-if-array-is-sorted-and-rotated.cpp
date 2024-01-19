class Solution {
public:
    bool check(vector<int>& nums) {
        int s=nums[0];int n=nums.size();
        int e=nums[n-1];
        if(s<e)
        {
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    return false;
                }
            }
        }else 
        {
            int ct=0;
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    ct++;
                }
            }
            if(ct>1)
            {
                return false;
            }
        }
        return true;
    }
};