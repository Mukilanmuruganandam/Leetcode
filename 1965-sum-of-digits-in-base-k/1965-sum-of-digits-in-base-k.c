int sumBase(int n, int k) {
    int r,s,c;
    s=0;
    c=0;
    while(n!=0)
    {
        r=n%k;
        s=s*10+r;
        n=n/k;
    }
    while(s!=0)
    {
        r=s%10;
        c=c+r;
        s=s/10;
    }
return c;
}