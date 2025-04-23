int splitArray(int* a,int n,int k){
    int s=0,s1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>s1)s1=a[i];
        s+=a[i];
    }
    s++;
    while(s1<s)
    {
        long m=(s1+s)/2;
        int c=1,t=0;
        for(int i=0;i<n;i++)
        {
            if(t+a[i]>m)
            {
                c++;
                t=a[i];
            }else t+=a[i];
        }
        if(c>k)s1=m+1;
        else s=m;
    }
    return s1;
}
