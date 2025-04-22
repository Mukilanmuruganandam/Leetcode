int splitNum(int n) {
    int a[10];
    int i=0,r,s,c,j;
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        i++;
        n/=10;
    }
    s=i;
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
int sum1=0;
for(i=0;i<s;i+=2)
{
    sum1=sum1*10+a[i];
}
int sum2=0;
for(i=1;i<s;i+=2)
{
    sum2=sum2*10+a[i];
}

return sum1+sum2;

    
}