bool reachingPoints(int a,int b,int c,int d){
while(c>a && d>b)
{
if(c>d)
c%=d;
else 
d%=c;
}
if(c==a && d>=b && (d-b)%a==0)
return true;
if(d==b && c>=a && (c-a)%b==0)
return true;
return false;
}
