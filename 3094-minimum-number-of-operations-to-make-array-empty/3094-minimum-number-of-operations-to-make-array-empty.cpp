class Solution {
public:
    int minOperations(vector<int>& nums) {
     int l=nums.size();
        int v[1000000]={0};
        for (int i=0;i<l;i++)
        {
            v[nums[i]]++;
        }int count=0;
        for(int i=0;i<1000000;i++)
        {
            if((v[i]%3==0)||((v[i]+1)%3==0))
            {
                count=count+(v[i]/3);
                v[i]=v[i]%3;
            }
            if(((v[i]-4)%3==0) && (v[i]-4>0))
            {
                count=count+((v[i]-4)/3);
                if(v[i]!=4){
                v[i]=4;}
                
            }
            if(v[i]%2==0){
                count=count+(v[i]/2);
            }
            else
            {
                return -1;
            }
        }
        return count;
    }
};