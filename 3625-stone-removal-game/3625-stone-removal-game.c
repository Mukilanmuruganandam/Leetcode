bool canAliceWin(int n){
int i;
for(i=10;i>=0;i--)
{
    if(n<i)
    return i%2!=0;
    n=n-i;
}
return false;
}
