int numSquares(int n){
    int i,j,s,a[n+1];
    for(i=0;i<=n;i++)
    a[i]=i;
    for(i=1;i*i<=n;i++)
    {
        s=i*i;
        for(j=s;j<=n;j++)
        {
            if(a[j]>a[j-s]+1)
                a[j]=a[j-s]+1;
        }
    }
    return a[n];
}
