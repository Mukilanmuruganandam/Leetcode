int minOperations(int* a, int n, int k) {
    int i,s=0,c=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    while(s%k!=0)
    {
        s--;
        c++;
    }
    return c;
}