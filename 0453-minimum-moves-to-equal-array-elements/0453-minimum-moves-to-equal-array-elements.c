int minMoves(int* a, int n) {
    int i;
    long long s=0,m=a[0];
    for(i=0;i<n;i++) 
    {
        s+=a[i];
        if(a[i]<m)
            m=a[i];
    }
    return (int)(s-m*n);
    
}