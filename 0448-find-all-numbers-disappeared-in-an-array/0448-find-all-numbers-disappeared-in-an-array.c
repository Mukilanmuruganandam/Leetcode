/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* a,int n, int* returnSize) {
    int c=0,i;
    for(i=0;i<n;i++) 
    {
        c=abs(a[i])-1;
        a[c]=abs(a[c])*-1;
    }
    int a1=0;
    *returnSize=0;
    for(i=0;i<n;i++) 
    {
        if(a[i]>0) 
        {
            ++*returnSize;
            a[a1]=i+1;
            a1++;
        }
    }
    return a;
}