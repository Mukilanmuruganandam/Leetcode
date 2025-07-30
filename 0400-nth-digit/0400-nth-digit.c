int findNthDigit(int n) {
    long l=1,cnt=9,s=1,n1,d;
    int i;
    while(n>l*cnt)
    {
        n=n-l*cnt;
        l++;
        cnt=cnt*10;
        s=s*10;
    }
    s+=(n-1)/l;
    d=(n-1)%l;
    n1=s;
    for(i=0;i<l-d-1;i++)
        n1=n1/10;
    return n1%10;
}
