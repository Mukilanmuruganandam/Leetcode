int candy(int* a, int n) {
    static int c[100000];
    int i,x;
    if(n<2) 
    return n;
    c[0]=1;
    for(i=1;i<n;i++) 
    {
        if(a[i]>a[i-1]) 
        {
            c[i]=c[i-1]+1;
        } 
        else 
        {
            c[i]=1;
        }
    }
    
    x=c[n-1];
    
    for(i=n-2;i>=0;i--) 
    {
        if(a[i]>a[i + 1]) 
        {
            if(c[i]<=c[i+1]) 
            {
                c[i]=c[i+1]+1;
            }
        }
        x+=c[i];
    }
    return x;
}