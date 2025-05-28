bool checkDistances(char* a, int* d, int distanceSize) {
    int ans[26],i,n,len;
    len=strlen(a);
    for(i=0;i<len;i++) 
    {
        n=a[i]-'a';
        if(ans[n]>0 && d[n]!=i-ans[n])
            return false;
        ans[n]=i+1;
    }
    return true;
}