int maxOperations(int* a,int n) {
    int i,c=1,s=a[0]+a[1];
    for(i=2;i<n-1;i+=2) 
    {
        if(a[i]+a[i+1]==s)
            c++;
        else
            break;
    }
    return c;
}