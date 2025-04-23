int maximum69Number(int n)
{
    int c=-1;
    int c1=0;
    int temp=n;
    while(temp>0)
    {
        int c2=temp%10;
        if(c2==6)
        c=c1;
        c1++;
        temp=temp/10;
    }
    if(c==-1)
    return n;
    int ans=n+(3*pow(10,c));
    return ans;
}
