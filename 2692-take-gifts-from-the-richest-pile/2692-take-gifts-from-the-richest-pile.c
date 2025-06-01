long long pickGifts(int*a,int n,int k)
{
    int i,j,l,big;
    long long s=0;
    while(k>0)
    {
        big=a[0];
        l=0;
        for(j=1;j<n;j++)
        {
            if(a[j]>big)
            {
                big=a[j];
                l=j;
            }
        }
        a[l]=(int)sqrt((double)big);
        k--;
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s;
}
