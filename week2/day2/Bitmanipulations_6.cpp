
unsigned int getAbs(int n){
    int const mask = n >> 31;
    printf("%d :: %d", mask,n+mask);
    return ((n + mask) ^ mask);
}
