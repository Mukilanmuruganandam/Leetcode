long long countSubarrays(int *a, int n, long long k) {
  long long ans=0,s=0,p;
  int i=-1,j;
  for(j=0;j<n;j++) 
  {
    s=s+a[j];
    p=s*(j-i);
    while(i<j && p>=k) 
    {
      i++;
      s=s-a[i];
      p=s*(j-i);
    }
    ans=ans+(j-i);
  }
  return ans;
}