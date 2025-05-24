bool threeConsecutiveOdds(int* a, int n){
    int c=0,i;
    for(i=0;i<n;i++) 
    {
        if(a[i]%2!=0) 
        {
            c++;
            if(c==3) 
            return true;
        } 
        else 
        {
            c=0;
        }
    }
    return false;
}