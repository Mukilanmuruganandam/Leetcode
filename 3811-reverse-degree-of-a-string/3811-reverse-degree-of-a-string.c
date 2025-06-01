int reverseDegree(char* s) {
    int a,c=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        a=0;
        a=26-(s[i]-'a');
        c+=a*(i+1);
    }
    return c;
}