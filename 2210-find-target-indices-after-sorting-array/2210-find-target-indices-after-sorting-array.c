/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* a, int n, int k, int* returnSize) {
    int* ans=(int*)calloc(sizeof(int), 101);
    *returnSize=0;
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }
    for(i=0;i<n;i++)
        if(a[i]==k)
            ans[(*returnSize)++]=i;
    return ans; 
}