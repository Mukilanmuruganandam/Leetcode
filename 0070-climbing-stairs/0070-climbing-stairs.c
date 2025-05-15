int climbStairs(int n) 
{
    int n1=1,n2=2,s = 0,i;
    if(n<=3)
    {
        return n;
    }
    for(i=3;i<=n;i++)
    {
        s=n1+n2;
        n1=n2;
        n2=s;
    }
return s;
}