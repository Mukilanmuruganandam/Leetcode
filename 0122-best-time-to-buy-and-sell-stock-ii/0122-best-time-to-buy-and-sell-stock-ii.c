int maxProfit(int* a, int n) {
    int i, d, p;
    if (n<2) 
    return 0;
    p = 0;
    for (i=1;i<n;i++) 
    {
        d=a[i]-a[i-1];
        if (d > 0) 
        {
            p = p + d;
        }
        else 
        {
            p = p;
        }

    }
    return p;
}