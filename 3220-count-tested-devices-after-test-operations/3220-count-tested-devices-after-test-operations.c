int countTestedDevices(int* a, int n) {
    int t=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]-t>0)
        t++;
    }
    return t;
}