bool isPalindrome(int n) {
    int r,c;
    long s;
    c=n;
    s=0;
    while(n!=0)
    {
    r=n%10;
    s=s*10+r;
    n=n/10;
    }
    if(c!=s || c<0)
    return false;
    else
    return true;
}