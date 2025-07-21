int minElement(int* a, int n) {
    int s=0,i;
    for(i=0;i<n;i++) 
    {
        while(a[i]>0) 
        {
            s+=a[i]%10;
            a[i]/=10;
        }
        a[i]=s;
        s=0;
    }
    s=a[0];
    for(i=1;i<n;i++) 
    {
        if(a[i]<s)
            s=a[i];
    }
    return s;
}