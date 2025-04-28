char* triangleType(int* d, int n) {
    int a,b,c;
    a=d[0];
    b=d[1];
    c=d[2];
    if (a == b && b == c)
        return "equilateral";
    if ((a == b && a + b > c) || (b == c && b + c > a) || (a == c && a + c > b))
        return "isosceles";
    if (a + b > c && b + c > a && a + c > b)
        return "scalene";

    return "none";
}