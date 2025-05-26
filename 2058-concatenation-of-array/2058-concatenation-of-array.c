/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* a,int n,int* returnSize) {
    int* ans=malloc(n*8),i;
    for(i=0;i<n;i++)
    {
        ans[i]=a[i];
        ans[n+i]=a[i];
    }
    *returnSize=n*2;
    return ans;
}