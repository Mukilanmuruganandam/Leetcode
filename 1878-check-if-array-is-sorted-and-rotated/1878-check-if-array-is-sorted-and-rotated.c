bool check(int* a, int n) {
    int c=0,i;
    if(a[0]<a[n - 1]) 
    {
        c++;
    }
    for(i=0;i<n-1;i++) 
    {
        if(a[i]>a[i+1]) 
        {
            c++;
        }
        if(c>1) 
        {
            return false;
        }
    }
    return true;
}