bool hasSameDigits(char* s) {
    int n=strlen(s),i;
    while(n>2) 
    {
        for(i=0;i<n-1;i++) 
        {
            s[i]=((s[i]-'0')+(s[i+1]-'0'))% 10+'0';
        }
        s[n-1]='\0';  
        n--; 
    }
    if (s[0] == s[1])
    return true;   
    else 
    return false;  
}