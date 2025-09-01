/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* a,int n,int* returnSize){
    int* ans=(int*)malloc(n*sizeof(int));
    *returnSize=n;
    int i,s;
    ans[0]=1;
    for(i=1;i<n;i++)
        ans[i]=ans[i-1]*a[i-1];
    s=1;
    for(i=n-1;i>=0;i--)
    {
        ans[i]*=s;
        s*=a[i];
    }
    return ans;
}
