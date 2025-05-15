int buyChoco(int* a,int n, int m){
    int i,j,c,t,s;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    s=a[0]+a[1];
    t=m-s;
    if(t>=0)
    {
        return t;
    }
    else
    {
        return m;
    }
}