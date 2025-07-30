int lastRemaining(int n) {
if(n==1) 
return 1;
int s,s1,s2,r;
bool l;
s=1;
s2=1;
r=n;
l=1;
while(r>1)
{
    if(l || r%2==1)
    {
        s+=s2;
    }
    s2*=2;
    r/=2;
    l=!l;
}
return s;
}
