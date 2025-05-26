int mostWordsFound(char ** s,int n){
    int c=0,i,j,c1;
    for(i=0;i<n;i++) 
    {
        c1 = 0;
        for(j=0;s[i][j]!='\0';j++) 
        {
            if (s[i][j]==' ') 
            {
                c1++;
            }
        }
        if(c1>c) 
        {
            c=c1;
        }
    }

    return c+1;
}