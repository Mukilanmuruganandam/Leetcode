int minTimeToType(char *word) 
{
    int ans=0,i,c,c1;
    char p='a';

    for(i=0;word[i]!='\0';i++) 
    {
        c=abs(word[i]-p);
        c1=26-c;
        if(c<c1)
           ans=ans+c+1;
        else
           ans=ans+c1+1;
        p=word[i];
    }

    return ans;
}