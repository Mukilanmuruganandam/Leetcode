/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* a, int n, int* returnSize) {
    int* ans=(int*)malloc(sizeof(int) * n);
    int i,j;
    for(i=0;i<n;i++)
    {
        ans[i]=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<=a[i])
            {
                ans[i]=a[i]-a[j];
                break;
            }
        }
    }
    *returnSize=n;
    return ans;
}