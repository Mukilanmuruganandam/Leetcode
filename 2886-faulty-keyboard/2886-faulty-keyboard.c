char * finalString(char * a){
    int l=0,i,j;
    int n=strlen(a);
    char c;
    for(i=0;i<n;i++)
    {
        if(i+1<n && a[i]=='i' && a[i+1]=='i')
        i++;
        else if(a[i]=='i')
        {
            j=0;
            while(j<l/2)
            {
                c=a[l-1-j];
                a[l-1-j]=a[j];
                a[j]=c;
                j++;
            }
        }
        else
        {
            a[l]=a[i];
            l++;
        }
    }
    a[l]='\0';
    return a;
}