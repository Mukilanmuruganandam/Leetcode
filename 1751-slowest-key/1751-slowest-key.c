char slowestKey(int* arr, int n, char* s) {
    int len=strlen(s);
    int m=0,a=0,ans,in=0,i;
    for(i=0;i<n;i++) 
    {
        ans=arr[i]-a;
        if(ans>m || (ans==m && s[i]>s[in])) 
        {
            m=ans;
            in=i;
        }
        a=arr[i];
    }
    return s[in];
}