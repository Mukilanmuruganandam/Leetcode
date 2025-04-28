int primePalindrome(int n) {
    while(1) 
    {
        int c=n,r=0,c1=n,i,p;
        while(c1>0) 
        {
            r=r*10+c1%10;
            c1/=10;
        }
        
        if(r==c) 
        {
            p=1;
            if(n<2) 
            p=0;
            for(i=2;i*i<=n;i++) 
            {
                if(n%i==0) 
                {
                    p=0;
                    break;
                }
            }
            if(p) 
            return n;
        }
        
        n++;
        if(n>11 && n%2==0) 
        n++;
    }
}
