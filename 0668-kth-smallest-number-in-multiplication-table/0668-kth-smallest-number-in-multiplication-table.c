int findKthNumber(int m,int n,int k){
int s=1,s1=m*n;

while(s<s1)
{
    int mid=(s+s1)/2;
    int c=0;
    for(int i=1;i<=m;i++)
    {
        int c1=mid/i;
        if(c1<n)
        c+=c1;
        else
        c+=n;
    }

    if(c<k)
    s=mid+1;
    else
    s1=mid;
}
return s;
}
