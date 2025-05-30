char kthCharacter(int k){
int c=0,n=k-1;
while(n>0)
{
    if(n%2!=0)
    c++;
    n=n/2;
}
return 'a'+c;
}
