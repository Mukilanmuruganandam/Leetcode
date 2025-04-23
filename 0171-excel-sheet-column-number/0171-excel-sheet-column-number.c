int titleToNumber(char * columnTitle){
    int c=0;
    for(int i=0;i<strlen(columnTitle);i++)
    {
        c*=26;
        c+=(columnTitle[i]-'A'+ 1);
    }
    return c;
}