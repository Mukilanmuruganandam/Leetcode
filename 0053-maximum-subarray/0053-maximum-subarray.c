int maxSubArray(int* a,int n){
    int ans=a[0];
    int c=0,i;
    for(i=0;i<n;i++)
    {
        c+=a[i];
        if(ans<c)
        {
            ans=c;
        }
        if(c<0)
        {
            c=0;
        }
    }
    return ans;      
}