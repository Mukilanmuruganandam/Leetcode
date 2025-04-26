bool areNumbersAscending(char * s){
    int n1=0,n2=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            n1*=10;
            n1+=(s[i]-'0');
        }
        else{
            if(n1)
            {
                if(n1<=n2)
                    return false;
                n2=n1;
                n1=0;
            }
        }
    }
    if(n1)
        return (n1 == 0) || (n1 > n2);
    return true;
}