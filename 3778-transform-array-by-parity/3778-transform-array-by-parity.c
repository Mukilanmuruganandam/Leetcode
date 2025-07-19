/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* a, int n, int* returnSize) {
    int *ans=malloc(n*sizeof(int));
    int i,j,c;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ans[i]=0;
        else
        ans[i]=1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ans[i]>ans[j])
            {
                c=ans[i];
                ans[i]=ans[j];
                ans[j]=c;
            }

        }
    }
    *returnSize=n;
    return ans;
}