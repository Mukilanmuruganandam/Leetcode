int smallestRangeI(int* a, int n, int k) {
    int m=a[0],min=a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    int s=m-min-2*k;
    if(s>0)
    return s;
    else
    return 0;

}