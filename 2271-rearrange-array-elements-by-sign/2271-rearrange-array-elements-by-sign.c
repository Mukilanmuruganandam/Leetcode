/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* a,int n,int* returnSize) {
    int* ans=(int*)malloc(sizeof(int) * n);
    int s=0,s1=1;

    for(int i=0;i<n;i++) 
    {
        if(a[i]>0) 
        {
            ans[s]=a[i];
            s+=2;
        } 
        else 
        {
            ans[s1]=a[i];
            s1+=2;
        }
    }

    *returnSize=n;
    return ans;
}
