int minOperations(int* a, int n) {
    int n1=a[0],i;
    for (i=1;i<n;i++)
    {
        if(n1!=a[i]) 
        return 1;
    }
    return 0;
}