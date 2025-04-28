char* convert(char* s, int n) {
    int i,j,l,a1;
    if(n==1) 
    return s;
    l=strlen(s);
    static char a[1000]; 
    a1=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<l;j+=2*(n-1)) 
        {
            a[a1]=s[j];
            a1++;
            if(i>0 && i<n-1 && j+2*(n-1)-2*i<l) 
            {
                a[a1]=s[j+2*(n-1)-2*i];
                a1++;
            }
        }
    }
    a[a1]='\0';
    return a;
}
