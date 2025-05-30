/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* a,int n,int* returnSize){
    int i,s=0,c;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            s++;
        }
        else
        {
            c=a[i];
            while(c>0)
            {
                c=c/10;
                s++;
            }
        }
    }
    int* ans=malloc(s*sizeof(int));
    int d=s-1;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            ans[d]=0;
            d--;
        }
        else
        {
            c=a[i];
            while(c>0)
            {
                ans[d]=c%10;
                d--;
                c=c/10;
            }
        }
    }
    *returnSize=s;
    return ans;
}
