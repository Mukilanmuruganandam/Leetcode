bool backspaceCompare(char*s,char*t){
    int i,j,c=0,c1=0,n=strlen(s),n1=strlen(t);
    i=n-1;j=n1-1;
    while(i>=0||j>=0)
    {
        while(i>=0)
        {
            if(s[i]=='#')
            {
                c++;
                i--;
            }
            else if(c>0)
            {
                c--;
                i--;
            }
            else 
            break;
        }
        while(j>=0)
        {
            if(t[j]=='#')
            {
                c1++;
                j--;
            }
            else if(c1>0)
            {
                c1--;
                j--;
            }
            else 
            break;
        }
        if(i>=0 && j>=0)
        {
            if(s[i]!=t[j])
            return false;
        }
        else if(i>=0||j>=0)
        {
            return false;
        }
        i--;
        j--;
    }
    return true;
}
