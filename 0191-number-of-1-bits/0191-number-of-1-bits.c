int hammingWeight(int n) {
    int r,s;
    s=0;
    while(n!=0)
    {
        r=n%2;
        if(r==1)
        s=s+1;
        n=n/2;
    }
return s;
}