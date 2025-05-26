int minimumCost(int* a,int n) {
    int i,j,c,s;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]<a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }
    s=0;
        for(i=0;i<n;i=i+3)
        {
            s+=a[i];
            if(i+1<n)
            s+=a[i+1];
        }
        return s;
    
}