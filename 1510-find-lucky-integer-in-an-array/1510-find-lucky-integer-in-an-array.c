int findLucky(int* a, int n) {
    int i,f,j,l=0;
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            f++;
        }
        if(f==a[i] && l<a[i])
            l=a[i];
    }
    if(l!=0)
    return l;
    else
    return -1;
}