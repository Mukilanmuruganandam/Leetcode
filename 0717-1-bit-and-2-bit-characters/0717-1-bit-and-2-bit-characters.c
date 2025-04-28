bool isOneBitCharacter(int* a, int n) {
    int i=0;
    while(i<n-1)
    {
        if(a[i]==0)
        {
            i++;
        }
        else
        {
            i=i+2;
        }
    }
    return i==n-1;
}