int getMaximumGenerated(int n) {
    if(n==0) 
    return 0; 
    if(n==1) 
    return 1;
    int i,a[n+1],m;
    a[0]=0;
    a[1]=1;
    m=1; 

      for(i=2;i<=n;i++) 
      { 
        if(i%2==0) 
        { 
          a[i]=a[i/2];
        } 
        else 
        { 
          a[i]=a[i/2]+a[i/2+1]; 
        } 
        if(a[i]>m) 
        {
          m=a[i]; 
        }
     }
return m;
}