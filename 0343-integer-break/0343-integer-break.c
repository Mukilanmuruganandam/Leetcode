int integerBreak(int n){
    int a[100],i,j,s,s1;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        a[i]=0;
        for(j=1;j<i;j++)
        {
            s=j*(i-j);
            s1=j*a[i-j];
            if(s>a[i])
                a[i]=s;
            if(s1>a[i])
                a[i]=s1;
        }
    }
    return a[n];
}
