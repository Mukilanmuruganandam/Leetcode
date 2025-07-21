int diagonalPrime(int** a, int n, int* numsColSize) {
    int i,j,ans[10000],m=0,k,f,big=0,n1;
    for(i=0;i<n;i++)
    ans[m++]=a[i][i];
    j=n-1;
    for(i=0;i<n;i++)
    {
        ans[m++]=a[i][j];
        j--;
    }
    k=0;
    for(i=0;i<m;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(ans[i]==ans[j])
        {
            f=0;
            break;
        }
        if(f==1)
        {
       if(ans[i]>1 && (ans[i]==2 || ans[i]%2!=0))
       ans[k++]=ans[i];
        }
    }
    for(i=0;i<k;i++)
    {
        n1=ans[i]/2;
        f=0;
       for(j=3;j<n1;j=j+2)
       {
       if(ans[i]%j==0)
       {
       f=1;
       break;
       }
       }
       if(f==0)
       {
       if(big<ans[i])
       big=ans[i];
       }
    }
    return big;
}