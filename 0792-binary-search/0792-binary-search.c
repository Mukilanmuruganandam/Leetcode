int search(int* a, int n, int t) {
    int i;
    for(i=0;i<n;i++)
    if(a[i]==t)
    {
        return i;
    }
    return -1;   
}