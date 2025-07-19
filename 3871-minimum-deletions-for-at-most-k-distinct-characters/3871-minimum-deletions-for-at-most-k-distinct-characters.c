int minDeletion(char*s,int k){
    int c[26]={0},a=0,t,i,j;
    for(i=0;s[i];i++)
    c[s[i]-'a']++;
    for(i=0;i<25;i++)
    for(j=i+1;j<26;j++)
    if(c[i]<c[j])
    {
        t=c[i];
        c[i]=c[j];
        c[j]=t;
    }
    i=0;
    while(k-- && i<26)
    c[i++]--;
    while(i<26 && c[i]>0)
    a+=c[i++];
    return a;
}
