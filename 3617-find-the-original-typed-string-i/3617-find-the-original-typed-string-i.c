int possibleStringCount(char* s) {
    int l=strlen(s),i;
    int c=l;

    for(i=1;i<l;i++)
    {
        c-=(s[i]!=s[i-1]);
    }
    return c;
}