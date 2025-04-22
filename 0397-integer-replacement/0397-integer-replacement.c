int integerReplacement(int n){
int c=0;
long k;
k=n;
while(k>1)
{
    if(k%2==0)
    {
        k = k/2;
    }
    else if(k%4==1 || k==3)
    {
        k=k-1;
    }
    else
    {
        k+=1;
    }
    c++;
}
return c;
}