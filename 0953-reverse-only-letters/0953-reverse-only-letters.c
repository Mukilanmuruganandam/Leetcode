char*reverseOnlyLetters(char*s){
    int s1=0,s2=strlen(s)-1;
    while(s1<=s2)
    {
        if(!(s[s1]>='A'&&s[s1]<='Z'||s[s1]>='a'&&s[s1]<='z'))
        {
            s1++;
            continue;
        }
        if(!(s[s2]>='a'&&s[s2]<='z'||s[s2]>='A'&&s[s2]<='Z'))
        {
            s2--;
            continue;
        }
        char c=s[s1];
        s[s1]=s[s2];
        s[s2]=c;
        s1++;
        s2--;
    }
    return s;
}
