int maxSumTwoNoOverlap(int*a,int n,int f,int se){
int m=0;
for(int i=0;i<=n-f;i++)
{
    int s1=0;
    for(int a1=i;a1<i+f;a1++)
    s1+=a[a1];
    for(int j=0;j<=n-se;j++)
    {
        if(j+se<=i||j>=i+f)
        {
            int s2=0;
            for(int b=j;b<j+se;b++)
            s2+=a[b];
            int total=s1+s2;
            if(total>m)m=total;
        }
    }
}
return m;
}
