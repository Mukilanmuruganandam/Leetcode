long long minCuttingCost(int n, int m, int k) {
    long long c=0;
        while(n>k)
        {
            n=n-k;
            c=c+(long long)k*n;
        }
        while(m>k) 
        {
            m=m-k;
            c=c+(long long)k*m;
        }

        return c;
}