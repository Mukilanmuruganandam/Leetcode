int minLength(char*s){
    char a[101];
    int l=strlen(s);
    int i=0,j=0,c=0;
    while(s[i]!='\0')
    {
        if(s[i]=='A'||s[i]=='C')
        {
            a[j]=s[i];
            j++;
        }
        else if(j>0 && ((s[i]=='B' && a[j-1]=='A') || (s[i]=='D' && a[j-1]=='C')))
        {
            j--;
            c++;
        }
        else
        {
            j=0;
        }
        if(j<0)
        j=0;
        i++;
    }
    return l-2*c;
}
