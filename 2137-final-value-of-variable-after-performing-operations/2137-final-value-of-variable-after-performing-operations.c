int finalValueAfterOperations(char** a, int n) {
    int x=0;
    for(int i=0;i<n;i++) 
    {
        if(a[i][1]=='-')
            --x;
        else
            ++x;
    }
    return x;
}
