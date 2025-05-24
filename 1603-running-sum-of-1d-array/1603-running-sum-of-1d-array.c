/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* a,int n,int* returnSize){
    int i;
    *returnSize=n;
    for(i=1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    return a;
}