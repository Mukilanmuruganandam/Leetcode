int numRookCaptures(char** b, int boardSize, int* boardColSize) {
    int m,n,r=0,f=0,i,j;
    for(m=0;m<8;m++)
    {
        for(n=0;n<8; n++)
        {
            if(b[m][n]=='R')
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    for(j=n+1;j<=7;j++)
    {
        if(b[m][j]=='p')
        {
            r++;
            break;
        }
        else if(b[m][j]=='B')
        {
            break;
        }
    }
   for(j=n-1;j>=0;j--)
   {
        if(b[m][j]=='p')
        {
            r++;
            break;
        }
        else if(b[m][j]=='B')
        {
            break;
        }
    }
    for(i=m+1;i<=7;i++)
    {
        if (b[i][n]=='p')
        {
            r++;
            break;
        }
        else if(b[i][n]=='B')
        {
            break;
        }
    }
    for(i=m-1;i>=0;i--)
    {
        if(b[i][n]=='p')
        {
            r++;
            break;
        }
        else if(b[i][n]=='B')
        {
            break;
        }
    }
    
    return r;
}