int minimumChairs(char* a) {
    int i,c=0,n,s=0;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='E')
        c++;
        else if(a[i]=='L')
        c--;
        if(c>s)
        s=c;
    }
    return s;
}