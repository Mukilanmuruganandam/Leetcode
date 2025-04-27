int maxDistance(int* a, int n) {
    int max=0,i,j,d;
    for (i=0;i<n;i++) 
    {
        for (j=n-1;j>i;j--) 
        {
            if (a[i]!=a[j]) 
            {
                d=j-i;
                if (d>max)
                    max=d;
                break;
            }
        }
    }
    return max;
}
