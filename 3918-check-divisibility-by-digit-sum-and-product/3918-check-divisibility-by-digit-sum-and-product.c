bool checkDivisibility(int n){
    int t=n;           
    int p=1,s=0,r;
    while(n>0)
    {
        r=n%10;
        p*=r;
        s+=r;
        n/=10;
    }
    int s1=p+s;
    if(s1==0) 
    return t==0;   
    return t%s1==0;
}
