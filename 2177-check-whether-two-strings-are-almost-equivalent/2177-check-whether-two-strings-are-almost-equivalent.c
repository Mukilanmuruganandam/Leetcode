
bool checkAlmostEquivalent(char* word1, char* word2)
{
    int a[26],b[26],l,i,d;
    for(int i=0;i<26;i++)
    {
    a[i]=0;
    b[i]=0;
    }
    l=strlen(word1);
    for(i=0;i<l;i++)
    {
        a[word1[i]-'a']++;
        b[word2[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        d=abs(a[i]-b[i]);
        if(d>=4)
        return false;
    }
    return true;
}