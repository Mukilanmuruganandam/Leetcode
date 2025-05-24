int findSpecialInteger(int* a, int n) {
    int i,j;
    i=0; 
    j=1;

    while(j<n) 
    {
        if(a[i]!=a[j]) 
        i=j;
        else if(1+j-i>n/4) 
        break;
        j++;
    }

    return a[i];
}