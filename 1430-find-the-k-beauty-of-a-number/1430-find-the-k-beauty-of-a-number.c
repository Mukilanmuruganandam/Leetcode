int divisorSubstrings(int num, int k) {
    int ans=0,c=0,p=1,n;
    for(n=num;n>0;n/=10) 
    {
        c+=(n%10)*p;
        if(--k>0)
            p*=10;
        else 
        {
            ans+=c && !(num%c);
            c/=10;
        }
    }
    return ans;
}