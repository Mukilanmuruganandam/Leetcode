int sumOfUnique(int* a, int n) {
    int s=0,i,j,c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]) 
            c++;
        }
        if(c==1) 
        s+=a[i];
    }
    return s;
}