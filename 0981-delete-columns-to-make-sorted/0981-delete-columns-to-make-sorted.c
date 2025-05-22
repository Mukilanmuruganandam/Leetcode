int minDeletionSize(char ** a, int n1){
    int r=0,i,j,n;
    n=strlen(a[0]);
    for(i=0;i<n;i++)
        for(j=0;j<n1-1;j++)
            if(a[j][i]>a[j+1][i])
            {
                r++;
                break;
            }
    return r;
}