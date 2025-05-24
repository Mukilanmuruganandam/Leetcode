int findTheDistanceValue(int* a1, int n1, int* a2, int n2, int d) {
    int r=0,i,j,c;
    for(i=0;i<n1;i++)
    {
        c=0;
        for(j=0;j<n2;j++)
        if(abs(a1[i]-a2[j])<=d)
        {
            c=1;
            break;
        }
        if(c==0)
           r++;
    }
    
    return r;
}