int minimumDifference(int* a, int n, int k) {
    int i,j,c,min,d;
    for(i=0;i<n-1;i++) 
    {
        for(j=i+1;j<n;j++) 
        {
            if(a[i]>a[j]) 
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    min=a[n-1]-a[0]; 
    for(i=0;i<=n-k;i++) 
    {
        d=a[i+k-1]-a[i];
        if(d<min)
            min=d;
    }

    return min;
}
