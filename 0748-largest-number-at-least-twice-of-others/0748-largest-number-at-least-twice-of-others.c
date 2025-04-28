int dominantIndex(int* a, int n) {
    int m=0,c,i;
    for(i=0;i<n;i++) 
    {
        if(m<a[i]) 
        {
            m=a[i];
            c=i;
        }
    }
    for(i=0;i<n;i++) 
    {
        if(m<a[i]*2 && i!=c)
            return -1;
    }
    return c;
}