int arraySign(int* a, int n) {
    int i,product=1,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        return 0;
        else if(a[i]<0)
        c++;
    }
    if(c%2==0)
    return 1;
    return -1;  
}