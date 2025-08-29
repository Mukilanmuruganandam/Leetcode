/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** a,int n,int* gridColSize,int* returnSize){
    int i,j;
    long m=(long)n*n;
    long s=m*(m+1)/2;
    long s1=m*(m+1)*(2*m+1)/6;
    long ans=0,ans1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            long x=a[i][j];
            ans+=x;
            ans1+=x*x;
        }
    }
    long d=ans-s;        
    long d1=ans1-s1;     
    long add=d1/d; 
    int* res=(int*)malloc(2*sizeof(int));
    res[0]=(d+add)/2; 
    res[1]=res[0]-d;
    *returnSize=2;
    return res;
}
