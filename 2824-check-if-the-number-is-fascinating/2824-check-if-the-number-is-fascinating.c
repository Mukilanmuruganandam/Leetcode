int numcount(int k)
{   
    int c=0;
    if(k==0)
    return 1;
    while(k>0)
    {
        c++;
        k=k/10;
    }
    return c;
}
bool isFascinating(int n) {
    int n1=n*2,n2=n*3,s=0,r,i;
    long long ans=n*(int)pow(10,numcount(n1))+n1;
    ans=ans*(int)pow(10,numcount(n2))+n2;
    int a[10];
    while(ans>0) 
    {
        r=ans%10;
        a[r]++;
        s+=r;
        ans/=10;
    }
    if(s!=45) 
    return false;
    for(i=1;i<=9;i++) 
    {
        if(a[i]!=1) 
        return false;
    }
    if(a[0]>0) 
    return false;

    return true;
}