bool checkTwoChessboards(char* a, char* b) {
    bool c1=(a[0]+a[1])%2;
    bool c2=(b[0]+b[1])%2;
    return c1==c2;
}
