int countBeautifulPairs(int* a, int n){
    int i,c=0,a1,b,j,k,hcf;
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            a1=a[i]%10;
            a[i]=a[i]/10;
        }
        for(j=i+1;j<n;j++)
        {
             b=a[j]%10;
             for(k=1;k<=a1;k++)
             {
                 if(a1%k==0 && b%k==0)
                    hcf=k;
             }  
           if(hcf==1)
             c++;
        }     
    }
    return c;

}