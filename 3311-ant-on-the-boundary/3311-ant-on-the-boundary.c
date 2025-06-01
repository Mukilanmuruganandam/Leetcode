int returnToBoundaryCount(int* a, int n) 
{
    int i,s=0,c=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s==0)
            c++;
    }
    return c;
}