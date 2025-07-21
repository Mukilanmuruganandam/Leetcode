int sumOfTheDigitsOfHarshadNumber(int n) {
    int r,s=0,c=n;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(c%s==0)
    return s;
    else
    return -1;
}