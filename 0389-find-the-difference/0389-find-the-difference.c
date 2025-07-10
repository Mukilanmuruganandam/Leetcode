char findTheDifference(char*s,char*t){
    int c=0,c1=0,i=0;
    while(s[i]!='\0')
    {
        c=c+s[i];
        i++;
    }
    i=0;
    while(t[i]!='\0')
    {
        c1=c1+t[i];
        i++;
    }
    return(char)(c1-c);
}
