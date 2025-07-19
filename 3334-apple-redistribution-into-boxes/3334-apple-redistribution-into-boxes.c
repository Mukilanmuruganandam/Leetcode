int minimumBoxes(int* a, int n, int* b, int n1) {
    int i,j,s=0,c,m;
    for(i=0;i<n;i++)
    s=s+a[i];
    for(i=0;i<n1;i++)
    for(j=i+1;j<n1;j++)
    if(b[i]<b[j])
    {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
    }
    c=0;
    m=0;
    for(i=0;i<n1;i++)
    {
        c=c+b[i];
        m++;
        if(c>=s)
        return m;
    }
    return m;
}