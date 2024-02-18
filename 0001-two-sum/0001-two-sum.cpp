class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a={0,0};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if((i!=j)&&(nums[i]+nums[j]==target))
                {
                    a[0]=i;
                    a[1]=j;
                    break;
                }
            }
        }
        return a;
    }
};