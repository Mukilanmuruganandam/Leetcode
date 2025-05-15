int countPrimes(int n)
{   int c,i,j;
    if(n<=2) 
    return 0;
    c=0;
    char p[n];
    for(i=2;i<n;i++) 
    p[i]=1;
    for(i=2;i*i<n;i++)
    {
        if(p[i])
        {
            for(j=i*i;j<n;j+=i)
                p[j]=0;
        }
    }
    for(i=2;i<n;i++)
        if(p[i]) 
        c++;
    return c;
}
