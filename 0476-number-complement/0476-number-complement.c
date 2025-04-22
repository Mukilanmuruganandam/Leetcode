int findComplement(int n){
int x=0,c=0;
while(n>0)
{
if(n%2==0)
c+=pow(2,x);
x++;
n=n/2;
}
return c;
}