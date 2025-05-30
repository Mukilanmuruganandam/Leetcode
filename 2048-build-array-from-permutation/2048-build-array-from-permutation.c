/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* a,int n,int* returnSize) {
    int i;
    int* ans=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    ans[i]=a[a[i]];
    *returnSize=n;
    return ans;
}