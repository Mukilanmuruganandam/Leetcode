bool findSubarrays(int* a,int n) {
	int c=0,i,j;
	for(i=0;i<n-1;i++)
    {
		for(j=i+1;j<n-1;j++)
        {
			if(a[j]+a[j+1]==a[i]+a[i+1]) 
            c++;
		}
	}
	return c>=1;   
}