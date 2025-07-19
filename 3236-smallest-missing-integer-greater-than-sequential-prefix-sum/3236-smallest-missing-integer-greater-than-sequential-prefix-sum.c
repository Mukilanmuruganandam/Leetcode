int missingInteger(int* a, int n) {
    int s=0,i,j;
    for(i=0;i<n;i++) 
    {
        if(i==0 || a[i]==a[i-1]+1) 
        {
            s+=a[i];
        } 
        else 
        {
            break;
        }
    }
    j=0;
    while(j<n)
    {
        if(a[j]==s)
        {
            s=s+1;
            j=0;
        }
        j++;
    }
    return s;
}