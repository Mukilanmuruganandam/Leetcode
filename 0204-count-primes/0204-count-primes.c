int countPrimes(int n)
{
    if(n<=2) 
    return 0;
    int c=0;
    char p[n];
    for(int i=2;i<n;i++) 
    p[i]=1;
    for(int i=2;i*i<n;i++)
    {
        if(p[i])
        {
            for(int j=i*i;j<n;j+=i)
                p[j]=0;
        }
    }
    for(int i=2;i<n;i++)
        if(p[i]) 
        c++;
    return c;
}
