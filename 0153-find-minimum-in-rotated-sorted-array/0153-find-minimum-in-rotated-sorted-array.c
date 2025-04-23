int findMin(int*a,int n){
int s1=0,s=n-1;
while(s1<s)
{
    int m=s1+(s-s1)/2;
    if(a[m]<a[s])
    {
        s=m;
    }
    else
    {
    s1=m+1;
    }
}
    return a[s1];
}