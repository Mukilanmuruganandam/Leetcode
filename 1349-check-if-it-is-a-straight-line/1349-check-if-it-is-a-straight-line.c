bool checkStraightLine(int** a, int n, int* n1)
{
    if (n == 2) 
    return true; 
    int x = 2;
    int y = 2; 
    int x1 = a[1][0]-a[0][0];
    int y1 = a[1][1]-a[0][1];
        
    for (int i=2;i<n;i++) 
    {
        if (a[i][0]-a[i-1][0]==x1)
            x++;
        if (a[i][1]-a[i-1][1]==y1)
            y++;
    }
    if (x==n && y==n) 
    return true;
    for (int i=0,j=1,k=2;i<n-2;i++,j++,k++) 
    {
        if ((a[i][1]-a[j][1])*(a[i][0]-a[k][0])!=(a[i][1]-a[k][1])*(a[i][0]-a[j][0]))
                return false;
    }
    return true;
}