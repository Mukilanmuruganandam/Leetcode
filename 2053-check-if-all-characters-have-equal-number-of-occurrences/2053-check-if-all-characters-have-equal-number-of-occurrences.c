bool areOccurrencesEqual(char* s) {
    int l=strlen(s);
    int a[100];
    for (int i=0;i<26;i++) 
    {
        a[i]=0;
    }
    for(int i=0;i<l;i++)
    {
        int n=s[i]-97;
        a[n]++;
    }
    int f=0;
    int f1=0;

    for(int i=0;i<26;i++)
    {
        if(f==0 && a[i]>0)
        {
            f1=a[i];
            f=1;
        }
        if(a[i]!=0 && a[i]!=f1)
        {
            return 0;
        }
        
    }
    return 1;
    
}