class Solution {
    public int mySqrt(int n) {
        if(n==0) 
        return 0;

        long i,s;
        s=0;
        for(i=1;i*i<=n;i++)
        {
            s=i;
        }
    return (int)s; 
    }
    
}