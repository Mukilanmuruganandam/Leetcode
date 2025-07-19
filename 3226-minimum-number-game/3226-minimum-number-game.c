/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* a,int n,int* returnSize){
    int* ans=(int*)malloc(n*sizeof(int));
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for(i=0;i<n-1;i+=2)
    {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
    }
    for(i=0;i<n;i++)
    ans[i]=a[i];
    *returnSize=n;
    return ans;
}
