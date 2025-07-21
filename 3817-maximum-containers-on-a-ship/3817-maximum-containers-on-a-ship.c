int maxContainers(int n, int w, int max) {
    if(max/w<=(n*n))
    return max/w;
    else 
    return n*n;
}