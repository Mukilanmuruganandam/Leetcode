int countPairs(int *a, int n, int target)
{
    int s=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) 
        {
            if(a[i]+a[j]<target)
            {
                s++;
            }
        }
    }
    return s;
}