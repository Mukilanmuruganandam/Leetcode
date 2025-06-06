

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* a,int n,int n1,int* returnSize) {
    int* ans=(int*)malloc(sizeof(int) * n);
    int i;
    for(i=0;i<n1;i++) 
    {
        ans[2*i]=a[i];
        ans[2*i+1]=a[i+n1];
    }

    *returnSize=n;
    return ans;
}