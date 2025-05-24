double average(int* a, int n) {
    double s=0;
    int m1=a[0],i;
    int m2=a[0];
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(a[i]>m1) 
        m1=a[i];
        if(a[i]<m2) 
        m2=a[i];
    }
    s=s-m1-m2;
    return s/(n-2);
}