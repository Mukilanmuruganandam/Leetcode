char* kthDistinct(char** arr, int n, int k)
{   int i,a,b,j,c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
            continue;
            a=0,b=0;
            while(arr[i][a]!='\0'&&arr[j][b]!='\0'&&arr[i][a]==arr[j][b])
            {
                a++;
                b++;
            }
            if(arr[i][a]=='\0'&&arr[j][b]=='\0')
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            k--;
            if(k==0)
            return arr[i];
        }
    }
return "";
}
