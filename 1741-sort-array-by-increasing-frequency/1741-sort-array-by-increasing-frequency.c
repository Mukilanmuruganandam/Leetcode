/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* frequencySort(int* a, int n, int* returnSize) {
    int *ans=malloc(n*sizeof(int));
    int i,j,c,t;
    for(i=0;i<n;i++)
        ans[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                ans[i]++;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ans[i]>ans[j])
            {
                c=ans[i];
                ans[i]=ans[j];
                ans[j]=c;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            else if(ans[i]==ans[j])
            {
                if(a[i]<a[j])
                {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                }
            }
        }
    }
    *returnSize=n;
    return a;
}