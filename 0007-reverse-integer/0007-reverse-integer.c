int reverse(int n){
    int r; 
    long s;
    s=0;
    while(n!=0)
    {
        r=n%10;
        if (s > INT_MAX / 10 || s < INT_MIN / 10) 
        return 0; 
        s=s*10+r;
        n=n/10;
    }
    return s;

}