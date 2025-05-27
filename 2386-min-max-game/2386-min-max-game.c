int minMaxGame(int* a,int n){
    int i;
    while(n>1)
    {
        for(i=0;i<n/2;i++)
        {
            if(i%2==0)
            {
                if(a[2*i]<a[2*i+1]) 
                a[i]=a[2*i];
                else 
                a[i]=a[2*i+1];
            }
            else
            {
                if(a[2*i]>a[2*i+1]) 
                a[i]=a[2*i];
                else 
                a[i]=a[2*i+1];
            }
        }
        n/=2;
    }
    return a[0];
}
