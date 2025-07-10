int*minSubsequence(int*a,int n,int*returnSize){
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    int*ans=(int*)malloc(n*sizeof(int));
    int l=0,r=0,s=0;
    for(i=0;i<n;i++)
    r=r+a[i];
    for(i=0;i<n;i++)
    {
        l=l+a[i];
        r=r-a[i];
        ans[s]=a[i];
        s=s+1;
        if(l>r)
        break;
    }
    *returnSize=s;
    return ans;
}
