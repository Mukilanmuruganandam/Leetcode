void rotate(int* a, int n, int k) {
    k=k%n;
    int n1=n-k;
    int i,j,c;
    i=0;
    j=n1-1;
    while(i<j)
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        i++;
        j--;
    }
    i=n1;
    j=n-1;
    while(i<j)
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        i++;j--;
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}