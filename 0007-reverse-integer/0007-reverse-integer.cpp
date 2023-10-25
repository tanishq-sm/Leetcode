class Solution {
public:
    int reverse(int x) {
        int temp;
        long int sum=0;
        while(x)
        {
            temp=x%10;
            sum=sum*10+temp;
            x=x/10;
        }
        if(sum>INT_MAX||sum<INT_MIN)
        {
            return 0;
        }else{
            return sum;
        }
    }
};