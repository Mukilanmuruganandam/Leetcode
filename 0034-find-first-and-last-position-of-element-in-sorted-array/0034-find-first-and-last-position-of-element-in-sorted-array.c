/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* a, int n, int t, int* returnSize) {
    int *ans=malloc(4*2),l,h,m;
    *returnSize=2;
    ans[0]=-1;
    ans[1]=-1;
    if(n==0) 
    return ans;
    l=0;
    h=n-1;
    while(l<h) 
    {
        m=l+(h-l)/2;
        if(a[m]<t)
        {
            l=m+1;
        } 
        else
        {
            h=m;
        }
    }

    if(a[l]!=t) 
    return ans;
    ans[0]=l;
    h=n-1;
    while(l<h)
    {
        m=l+(h-l)/2+1; 
        if(a[m]>t) 
        {
            h=m-1;
        } 
        else
        {
            l=m;
        }
    }
    ans[1]=h;
    return ans;
}