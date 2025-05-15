int findNonMinOrMax(int* a, int n) 
{   int i,m1,m2;
    if(n<=2)
    return -1;
    m1=1101,m2=101;
    for(i=0;i<n;i++) 
    {
        if(m1>a[i]) 
        {
            m2=m1;
            m1=a[i];
        } 
        else if(m2>a[i]) 
        {
            m2=a[i];
        }
    }
    return m2;
}