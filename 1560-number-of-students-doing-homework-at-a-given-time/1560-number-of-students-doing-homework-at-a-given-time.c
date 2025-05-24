int busyStudent(int* a, int n, int* a1, int a2, int a3) {
    int c=0,i;
    for(i=0;i<n;i++)
        if(a[i]<=a3 && a1[i]>=a3)
            c++;
    return c;
}