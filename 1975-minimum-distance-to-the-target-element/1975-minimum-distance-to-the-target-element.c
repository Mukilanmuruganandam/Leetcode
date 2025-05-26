int getMinDistance(int* a, int n, int target, int start) {
    int ans=1000000,i,d;
    for(i=0;i<n;i++) 
    {
        if(a[i]==target) 
        {
            d=i-start;
            if(d<0) 
            d=-d;
            if(d<ans) 
            ans = d;
        }
    }
    return ans;
}
