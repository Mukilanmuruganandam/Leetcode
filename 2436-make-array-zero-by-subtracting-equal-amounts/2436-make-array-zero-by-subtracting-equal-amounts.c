int minimumOperations(int* a,int n) 
{   int i,ans;
    bool set[101]={};
    for(i=0;i<n;++i)
        set[a[i]]=true;
    ans = 0;
    for(i=1;i<101;i++)
        if(set[i])
            ++ans;
    return ans;
}