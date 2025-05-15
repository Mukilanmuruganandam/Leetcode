int largestPalindrome(int n)
{
    if(n==1) return 9;
    long long a=1,b,l,pal,i,j,n1,r,m;
    for(i=0;i<n;i++) 
    a=a*10;
    b=a/10;
    for(l=a-1;l>=b;l--)
    {
        n1=l;r=0;i=l;
        while(i>0)
        {
            r=r*10+i%10;
            i/=10;
        }
        pal=l*a+r;
        for(i=a-1;i*i>=pal;i--)
        {
            if(pal%i==0)
            {
                j=pal/i;
                if(j>=b&&j<a)
                    return pal%1337;
            }
        }
    }
    return -1;
}
