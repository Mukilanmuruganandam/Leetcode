int concatenatedBinary(int n){
    long long ans=0;
    int k=0,i,j,s,c;
    for(i=1;i<=n;i++)
    {
        s=i,c=0;
        while(s>0)
        {
            if(s%2==1)
            c++;
            s=s/2;
        }
        if(c==1)
        k++;
        long long p=1;
        for(j=0;j<k;j++)
        p=p*2;
        ans=(ans*p+i)%1000000007;
    }
    return (int)ans;
}
