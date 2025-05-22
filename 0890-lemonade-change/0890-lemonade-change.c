bool lemonadeChange(int* a, int n) {
    int m=0,m1=0;
        for(int i=0;i<n;i++) 
        {
            if(a[i]==5)
                m++;
            
            else if(a[i]==10) 
            {
                if(m>=1) 
                {
                    m--;
                    m1++;
                }
                else
                    return false;
            }
            else 
            {
                if(m>=1 && m1>=1) 
                {
                    m1--;
                    m--;
                }
                else if(m>=3)
                    m-=3;
                else
                    return false;
            }
        }
        return true;
}