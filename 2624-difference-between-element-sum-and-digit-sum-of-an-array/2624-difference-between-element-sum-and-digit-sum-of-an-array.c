int differenceOfSum(int* a, int n) {
    int i,s,r,s1;
    s=0;
    s1=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        while(a[i]!=0)
        {
            r=a[i]%10;
            s1=s1+r;
            a[i]=a[i]/10;
        }
    }
    return s-s1;   
}