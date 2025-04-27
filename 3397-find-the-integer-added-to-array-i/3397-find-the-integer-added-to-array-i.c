int addedInteger(int* a, int n1, int* b, int n2) 
{
    int m1=a[0],m2=b[0],i;
    for(i=1;i<n1;i++) 
    {
        if(a[i]>m1) 
        m1=a[i];
    }
    for (i=1;i<n2;i++) 
    {
        if (b[i]>m2) 
        m2=b[i];
    }

    return m2-m1;
}