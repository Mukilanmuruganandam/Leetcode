/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortByBits(int* a,int n,int* returnSize) {
    int i,j,c,c1,s;
    for(i=0;i<n-1;i++) 
    {
        for(j=0;j<n-1-i;j++) 
        {
            int a1=a[j],b=a[j+1];
            c=0,c1=0;
            while(a1>0) 
            {
                if(a1%2==1) 
                c++;
                a1=a1/2;
            }
            while(b>0) 
            {
                if(b%2==1) 
                c1++;
                b=b/2;
            }
            if(c>c1 || (c==c1 && a[j]>a[j+1])) 
            {
                s=a[j];
                a[j]=a[j+1];
                a[j+1]=s;
            }
        }
    }
    *returnSize=n;
    return a;
}
