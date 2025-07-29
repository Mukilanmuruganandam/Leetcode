int bulbSwitch(int n)
{
    long long i,c;
    c=0;
    for(i=1;i*i<=n;i++)
    {
        c++;
    }
    return c;
}