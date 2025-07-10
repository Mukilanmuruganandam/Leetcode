double trimMean(int*a,int n){
    int i,j,c,r,s,c1;
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
    r=n/20;
    s=0,c1=0;
    for(i=r;i<n-r;i++)
    {
        s+=a[i];
        c1++;
    }
    return(double)s/c1;
}
