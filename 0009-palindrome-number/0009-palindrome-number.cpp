class Solution {
public:
    bool isPalindrome(int x) {
        int temp,copy;
        long int rev=0;
        copy=x;
        for(int i=0;x>0;i++)
        {
            temp=x%10;
            rev=(rev*10)+temp;
            x=x/10;
        }
        if(copy==rev)
        {
            return true;
        }else{
            return false;
        }
    }
};