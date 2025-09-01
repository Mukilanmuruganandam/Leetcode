int pivotIndex(int* a, int n) {
    int i,s;
    s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    int ls=0;
    int rs;
    for(i=0;i<n;i++)
    {
        rs=s-ls-a[i];
        if(ls==rs)
        {
            return i;
        }
        ls+=a[i];
    }
    return -1;   
}