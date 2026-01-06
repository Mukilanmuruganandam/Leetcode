class Solution {
    public int mySqrt(int n) {

        long i,s;
        s=0;
        for(i=1;i*i<=n;i++)
        {
            s=i;
        }
    return (int)s; 
    }
    
}