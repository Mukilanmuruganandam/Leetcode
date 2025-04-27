char* reverseVowels(char* s) {
    int n=strlen(s);
    char a[n];
    int c=0,c1,i;
    for(i=0;i<n;i++) 
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
        s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
        {
            a[c]=s[i];
            c++;
        }
    }
    c1=c-1;
    for(i=0;i<n;i++) 
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
        s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
        {
            s[i]=a[c1]; 
            c1--;
        }
    }

    return s;
}
