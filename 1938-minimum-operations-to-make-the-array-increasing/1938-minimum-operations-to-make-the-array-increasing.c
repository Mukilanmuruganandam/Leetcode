int minOperations(int* a, int n){
    int i,c=0;
    for(i=1;i<n;i++)
        if(a[i]<=a[i-1])
        {
            c=c+(a[i-1]-a[i]+1);
            a[i]=a[i-1]+1;
        }
    return c;
}