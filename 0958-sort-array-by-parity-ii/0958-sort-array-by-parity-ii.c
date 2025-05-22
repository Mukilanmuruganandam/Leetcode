/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* a, int n, int* returnSize) {
    int* ans=(int*)malloc(n * sizeof(int));
    int i=0,j=i+1,k;
    for(k=0;k<n;k++) 
    {
        if(a[k]%2==0)
        {
            ans[i]=a[k];
            i+=2;
        }
        else
        {
            ans[j]=a[k];
            j+=2;
        }
    }
    *returnSize=n;
    return ans;
}