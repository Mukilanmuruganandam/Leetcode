bool judgeCircle(char* a) {
    int x=0,y=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='U')
        {
            y++;
        }
        if(a[i]=='D')
        {
            y--;
        }
        if(a[i]=='R')
        {
            x++;
        }
        if(a[i]=='L')
        {
            x--;
        }
    }
    if(x==0 && y==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}