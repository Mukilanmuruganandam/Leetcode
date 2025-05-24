bool kLengthApart(int* nums, int n, int k) 
{
    int j=0,i;
    while(j<n && nums[j]!=1)
        j++;
    for(i=j+1;i<n;i++)
    {
        if(nums[i]==1 && k<=(i-j-1))
            j=i;
        else  if(nums[i]==1)
            return false;
    }   
    return true; 
}