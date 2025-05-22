bool isBoomerang(int** a, int n, int* n1) {
    int x1=a[0][0],y1=a[0][1];
    int x2=a[1][0],y2=a[1][1];
    int x3=a[2][0],y3=a[2][1];
    double area=0.5*abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
    return area!=0;
}