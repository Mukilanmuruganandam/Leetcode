int smallestNumber(int n, int t) {
int s,r,i,j;
for(j=n;j<=100;j++)
{
    i=j;
    s=1;
    while(i!=0)
    {
        r=i%10;
        s=s*r;
        i=i/10;
    }
if(s%t==0)
return j;  
}
return n;
}