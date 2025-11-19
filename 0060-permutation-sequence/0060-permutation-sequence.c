char* getPermutation(int n,int k)
{
int arr[10],arr1[10]={0};
arr[0]=1;
for(int i=1;i<=n;i++)
arr[i]=arr[i-1]*i;
char*ans=malloc((n+1)*sizeof(char));
k--;
for(int i=0;i<n;i++)
{
    int s=k/arr[n-1-i];
    int c=0;
    for(int j=1;j<=n;j++)
    {
        if(!arr1[j])
        {
            if(c==s)
            {
                ans[i]='0'+j;
                arr1[j]=1;
                break;
            }
        c++;
        }
    }
    k%=arr[n-1-i];
}
ans[n]='\0';
return ans;
}
