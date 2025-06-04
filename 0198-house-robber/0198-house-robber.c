int rob(int*a,int n){
    if(n==0) 
    return 0;
    if(n==1) 
    return a[0];
    int s=0,s1=a[0],c,i;
    for(i=1;i<n;i++)
    {
        if(s1>s+a[i])
            c=s1;
        else
            c=s+a[i];
        s=s1;
        s1=c;
    }
    return s1;
}
