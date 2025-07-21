int minimumOperations(int* a, int n) {
    int c=0,i;
    for(i=0;i<n;i++) 
    {
        if(a[i]%3!=0)
        {
            c++;
        }
    }
    return c;
}