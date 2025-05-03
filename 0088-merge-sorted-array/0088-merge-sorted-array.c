void merge(int* a, int n1, int m, int* a1, int n2, int n) {
    if(n==0)
    return;
    int len1=n1;
    int i=len1-1;
    while(n>0 && m>0)
    {
        if(a1[n-1]>=a[m-1])
        {
        a[i]=a1[n-1];
        n--;
        }
        else
        {
            a[i]=a[m-1];
            m--;
        }
        i--;
    }
    while(n>0) 
    {
        a[i]=a1[n-1];
        n--;
        i--;
    }
}