class Solution {
    public boolean isPalindrome(int x) {
        int rev=0,temp,copy;
        copy=x;
        for(int i=0;x>0;i++)
        {
            temp=x%10;
            rev=rev*10+temp;
            x=x/10;
        }
        if(copy==rev)
        {
            return true;
        }else{
            return false;
        }
    }
}