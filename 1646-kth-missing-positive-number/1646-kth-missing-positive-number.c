int findKthPositive(int* a,int n,int k) {
    int l=0,p=0;
    while(l!=n)
    {
        p++;
        if(p==a[l])
        l++;
        else 
        k--;
        if(k==0)
        return p;
    }
    return a[n-1]+k;
}