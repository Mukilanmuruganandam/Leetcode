class Solution {
    public boolean isPalindrome(int x) {
        int c=x;
        long s=0,r;
        while(x>0)
        {
            r=x%10;
            s=s*10+r;
            x/=10;
        }
       if(c!=s || c<0)
        return false;
        else
        return true;
        
    }
    
}