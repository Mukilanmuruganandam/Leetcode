int prefixCount(char**s,int n,char*p){
    int c=0,i,j,n1,m;
    n1=strlen(p);
    for(i=0;i<n;i++)
    {
        m=1;
        for(j=0;j<n1;j++)
        {
            if(s[i][j]!=p[j] || s[i][j]=='\0')
            {
                m=0;
                break;
            }
        }
        if(m)
        c++;
    }
    return c;
}
