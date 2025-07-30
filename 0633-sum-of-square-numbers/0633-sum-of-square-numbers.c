bool judgeSquareSum(int n) {
    long long l=0,r=sqrt(n);
    while(l<=r) 
    {
        if(l*l+r*r==n) 
        return true;
        if(l*l+r*r>n) 
        r--;
        else 
        l++;
    }
    return false;
}