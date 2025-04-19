int triangularSum(int* a, int n)
{   int i;
    while(n!=0)
    {
        for(i=0;i<n-1;i++)
            a[i]=(a[i]+a[i+1])%10;
        n--;
    }
    return a[0];
}