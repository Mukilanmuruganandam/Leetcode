int generateKey(int a, int b, int c) {
    int ans=0,p=1;
    int min(int a,int b,int c)
    {
        if(a<=b&&a<=c)
        return a;
        else if(b<=a &&b<=c)
        return b;
        else return c;
    }
    while(a && b && c)
    {
        ans=ans+min(a%10,b%10,c%10)*p;
        p*=10;
        a/=10;
        b/=10;
        c/=10;
    }
    return ans;
}