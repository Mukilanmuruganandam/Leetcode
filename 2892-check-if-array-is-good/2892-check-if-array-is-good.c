bool isGood(int* a, int n) {
    int max=0,i,j,c;
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
for(i=1;i<=max;i++)
{
    c=0;
    for(j=0;j<n;j++)
    {
        if(a[j]==i)
        {
            c++;
        }
    }
    if(i==max && c!=2)
    {
        return false;
    }
     else if(i!=max && c!=1)
    {
        return false;
    }
}
return true;
}