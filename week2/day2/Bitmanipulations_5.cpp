int lrotate (int a, uint32_t n ){
    return (a << n) | (a >> (32 - n));
}

int rrotate (int a, uint32_t n ){
    return (a >> n) | (a << (32 - n));
}
