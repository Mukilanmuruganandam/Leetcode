bool canBeEqual(int* a, int n, int* a1, int n1) {
    if(n!=n1) 
    return false;
    int i;
    int ans[1001];
    for(i=0;i<n;i++) 
    {
        ans[a[i]]++;
        ans[a1[i]]--;      
    }

    for(i=0;i<1001;i++) 
    {
        if(ans[i]!=0) 
        return false;
    }

    return true;
}
