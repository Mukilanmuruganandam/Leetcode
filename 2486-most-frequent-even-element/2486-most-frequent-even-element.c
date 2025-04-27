int mostFrequentEven(int* a, int n) {
    int mf=0,cf,cn,i,j;
    int result=-1;
    for(i=0;i<n;i++) 
    {
        if(a[i]%2==0) 
        {
            cn=a[i];
            cf=0;
            for(j=0;j<n;j++) 
            {
                if(a[j]==cn) 
                {
                   cf++;
                }
            }
            if(cf>mf || (cf==mf && cn<result)) 
            {
                mf=cf;
                result=cn;
            }
        }
    }

    return result;
}