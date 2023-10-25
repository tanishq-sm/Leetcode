class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int> s;
        vector<int> v;
        int l=nums.size();
        for (int i=0; i<l ; i++)
        {
            if(nums[i]%2==1)
            {
                s.push_back(nums[i]);
                continue;
            }    
            v.push_back(nums[i]);
        }
        int m=s.size();
        for(int i=0;i<m;i++)
        {
            v.push_back(s.back());
            s.pop_back();
        }
        return v;
    }
};