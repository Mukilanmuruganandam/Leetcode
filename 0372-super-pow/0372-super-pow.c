int superPow(int a,int*b,int n)
{
    int i,j,ans=1,c,p;
    a=a%1337;
    for(i=0;i<n;i++)
    {
        c=ans;
        for(j=1;j<10;j++)
        {
            ans=(ans*c)%1337;
        }
        p=1;
        for(j=0;j<b[i];j++)
        {
            p=(p*a)%1337;
        }
        ans=(ans*p)%1337;
    }
    return ans;
}
