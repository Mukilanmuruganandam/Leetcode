int pivotInteger(int n) {
    int s,s1;
    s1=(n*(n + 1))/2;
    s=0;

    while(s1>s) 
    {
        s=s+n;
        if(s==s1) 
        return n;
        s1=s1-n;
        n--;
    }
    return -1;
}
