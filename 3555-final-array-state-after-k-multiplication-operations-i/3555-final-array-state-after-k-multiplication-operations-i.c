int* getFinalState(int* a,int n,int k,int m, int* returnSize) {
    *returnSize=n;
    int i,j,c;
    int* ans=(int*)malloc(n * sizeof(int));
    
    for(i=0;i<n;i++) 
    {
        ans[i]=a[i];
    }
    
    for(i=1;i<=k;i++) 
    {
        c=0;
        for(j=0;j<n;j++) 
        {
            if(ans[j]<ans[c]) 
            {
                c=j;
            }
        }
        ans[c]=ans[c]*m;
    }
    
    return ans;
}