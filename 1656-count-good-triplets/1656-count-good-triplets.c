int countGoodTriplets(int* arr, int n, int a, int b, int c){
    int s=0,i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(i<j<k && abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<= b && abs(arr[i]-arr[k])<=c) 
                s++;
            }
        }
    }
    return s;
}