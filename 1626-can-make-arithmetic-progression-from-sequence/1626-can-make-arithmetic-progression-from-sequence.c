bool canMakeArithmeticProgression(int* a, int n) {
    int i,j,c,d;
    for(i=0;i<n-1;i++) 
    {
        for(j=0;j<n-i-1;j++) 
        {
            if(a[j]>a[j+1])
             {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }

    d=a[1]-a[0]; 
    for(i=1;i<n;i++) 
    {
        if(a[i]-a[i-1]!=d)
         {
            return false;  
        }
    }

    return true;
}
