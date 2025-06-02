int numberOfChild(int n, int k) {
    int c,r;
    c=2*(n-1);
    r=k%c;
    if(r<n)
    return r;
    else 
    return c-r;
}