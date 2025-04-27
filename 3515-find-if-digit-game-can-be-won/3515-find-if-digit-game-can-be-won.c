bool canAliceWin(int* a, int n) {
    int s=0,s1=0;
    for(int i=0;i<n;i++) 
    {
        if(a[i]<10)
            s+=a[i];
        else
            s1+=a[i];
    }
    return s!=s1;
}