int timeRequiredToBuy(int* a,int n,int k) {
    int ans=0,p=0;
    while(a[k]!=0) 
    {
        if(a[p]!=0) 
        {
            a[p]--;
            ans++;
        } 
        p++;
        if(p==n)
            p=0;
    }
    return ans;
}