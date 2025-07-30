int minMoves(int* a, int n) {
    int m=a[0],i;
    long long s=0;
    for(i=0;i<n;i++) 
    {
        s+=a[i];
        if(a[i]<m)
            m=a[i];
    }
    return (int)(s-(long long)m*n);
    
}