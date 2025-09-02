bool checkPrimeFrequency(int* a,int n){
    int i,j,k,c,s;
    for(i=0;i<n;i++)
    {
        if(a[i]==-1)
        continue;
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }
        }
        if(c>1)
        {
            s=1;
            for(k=2;k*k<=c;k++)
            {
                if(c%k==0)
                {
                    s=0;
                    break;
                }
            }
            if(s==1)
            return 1;
        }
    }
    return 0; 
}
