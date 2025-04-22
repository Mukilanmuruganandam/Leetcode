

int countConsistentStrings(char*allowed,char**words,int n){
int c=0,c1=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<strlen(words[i]);j++)
{
c=0;
for(int k=0;k<strlen(allowed);k++)
{
if(words[i][j]==allowed[k])
c++;
}
if(c<1)
{
c1++;
break;
}
}
}
return n-c1;
}