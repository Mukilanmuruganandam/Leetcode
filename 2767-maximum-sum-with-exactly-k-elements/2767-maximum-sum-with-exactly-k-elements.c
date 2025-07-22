int maximizeSum(int* a, int n, int k) {
    int m=0,i,s;
    for(i=0;i<n;i++)
    {
        if(a[i]>m) 
        m=a[i];
    }
    s=0;
    for(i=1;i<=k;i++)
    {
        s+=m;
        m++;
    }
    return s;
}