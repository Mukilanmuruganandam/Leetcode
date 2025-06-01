int semiOrderedPermutation(int* a,int n) {
    int s,s2,i;
    for(i=0;i<n;i++) 
    {
        if (a[i]==1)
            s=i;
        if(a[i]==n)
            s2=i;
    }
    if(s<s2)
        return s+((n-1)-s2);
    return s+(((n-1)-s2))-1;
}