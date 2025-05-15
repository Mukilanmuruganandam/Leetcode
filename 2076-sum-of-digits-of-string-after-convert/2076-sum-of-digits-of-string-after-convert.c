int getLucky(char* s, int k) 
{
    int s1=0,i,s2,a;
    for(i=0;s[i];i++) 
    {
        a=s[i]-'a'+1;
        s1+=a/10+a%10;
    }
    for(i=1;i<k;i++) 
    {
        s2=0;
        while(s1) 
        {
            s2=s2+s1%10;
            s1=s1/10;
        }
        s1=s2;
    }

    return s1;
}
