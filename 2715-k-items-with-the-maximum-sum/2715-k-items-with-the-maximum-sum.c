int kItemsWithMaximumSum(int n, int n1, int n2, int k) {
    if(n>=k)
            return k;
        if(n+n1>=k)
            return n;
        k-=n1;
        k-=n;
    return n-k;
    
}