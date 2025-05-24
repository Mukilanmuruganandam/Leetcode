int countStudents(int* a, int n, int* a1, int n1) {
        int c=0,c1=0,i;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
            else
            {
                c1++;
            }
        }
        for(i=0;i<n1;i++)
        {
            if(a1[i]==0 && c==0)
            {
                return c1;
            }
            if(a1[i]==1 && c1==0)
            {
                return c;
            }
            if(a1[i]==0)
            {
                c--;
            }
            else
            {
                c1--;
            }
        }
    return 0;
}