int maximumWealth(int** a, int n, int* n1){
        int s=0,i,j,c;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<*n1;j++)
            {
                c=c+a[i][j];
            }
            if(c>s) 
            s=c;
        }
        return s;
}