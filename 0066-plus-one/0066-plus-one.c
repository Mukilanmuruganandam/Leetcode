int* plusOne(int* a, int n, int* returnSize) {
    for(int i=n-1;i>=0;i--) 
    {
        if(a[i]!=9) 
        {
            a[i]++;
            *returnSize=n;
            return a;
        }
        a[i]=0;
    }
    int* res=(int*)malloc((n+1) * sizeof(int));
    res[0]=1;
    for(int i=1;i<=n;i++) 
    res[i]=0;
    *returnSize=n+1;
    return res;
}
