long long removeZeros(long long n){
    long long rev=0,res=0;
    while(n>0)
    {
        int d=n%10;
        if(d!=0)
            rev=rev*10+d;
        n/=10;
    }
    while(rev>0)
    {
        int d=rev%10;
        res=res*10+d;
        rev/=10;
    }
    return res;
}
