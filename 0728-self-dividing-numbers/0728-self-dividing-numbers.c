int* selfDividingNumbers(int left,int right,int* returnSize){
int*arr=malloc(200*sizeof(int));
int j=0;
for(int i=left;i<=right;i++)
{
    int c=i,f=0,t=i;
    while(t>0)
    {
        int r=t%10;
        if(r==0||c%r!=0)
        {
            f=1;
            break;
        }
        t/=10;
    }
    if(f==0)
    arr[j++]=c;
}
*returnSize=j;
return arr;
}
