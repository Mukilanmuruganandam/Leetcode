int countBinarySubstrings(char*a){
    int s1=0,s2=1,c=0,n=strlen(a),i;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            s2++;
        }
        else
        {
            if(s1<s2)
            {
                c+=s1;
            }
            else
            {
                c+=s2;
            }
            s1=s2;
            s2=1;
        }
    }
    if(s1<s2)
    {
        c+=s1;
    }
    else
    {
        c+=s2;
    }
    return c;
}
