int numOfUnplacedFruits(int* a,int n,int* a1, int n1) {
    int s=0,i,j; 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(a[i]<=a1[j])
            {
                s++;
                a1[j]=0;
                break;
            }
        }
    }
    return n-s;
}