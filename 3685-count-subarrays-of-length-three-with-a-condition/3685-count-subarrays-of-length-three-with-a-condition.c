int countSubarrays(int* a, int n) 
{
    int ans=0;
    for(int i=0;i<=n-3;i++)
        if(a[i+1]%2==0)
        {
            if((a[i]+a[i+2])==a[i+1]/2)
            {
                ans++;
            }
            
        }
        return ans;
}
