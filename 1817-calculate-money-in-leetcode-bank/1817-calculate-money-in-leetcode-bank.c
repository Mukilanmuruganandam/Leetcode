int totalMoney(int n) {
    int s,r,ans,i;
    s=n/7;
    r=n%7;
    ans=(s*28)+(((s-1)*s)/2)*7;
    for(i=1;i<=r;i++) 
    {
        ans+=s+i;
    }
    return ans;
}