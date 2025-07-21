int sumOfEncryptedInt(int*a,int n){
    int s=0,i;
    for(int i=0;i<n;i++)
    {
        int x=a[i],m=0,d=0;
        while(x)
        {
            if(x%10>m)
                m=x%10;
            x/=10;
            d++;
        }
        int e=0;
        while(d--)
        e=e*10+m;
        s+=e;
    }
    return s;
}
