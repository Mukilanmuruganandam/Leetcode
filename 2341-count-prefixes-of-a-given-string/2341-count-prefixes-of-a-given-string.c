int countPrefixes(char** a, int n, char* s) {
    int t,c=0,i,j;
    for(i=0;i<n;i++) 
    {
        t=1;
        if(strlen(a[i])<=strlen(s)) 
        {

            for(j=0;j<strlen(a[i]);j++) 
            {
                if(a[i][j]!=s[j])
                    t=0;
            }
            if(t)
                c++;
        }
    }
    return c;
}