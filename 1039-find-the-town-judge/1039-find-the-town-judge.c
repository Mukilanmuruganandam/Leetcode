int findJudge(int n, int** a,int n1,int* trustColSize) {
    int ans[n],i;
    for(i=0;i<n;i++)
    {
        ans[i]=0;
    }
    for(i=0;i<n1;i++)
    {
        (ans[a[i][1]-1])++;
        (ans[a[i][0]-1])--;
    }

    for(i=0;i<n;i++)
    {
        if(ans[i]==n-1) 
        return i+1;
    }

    return -1;
}