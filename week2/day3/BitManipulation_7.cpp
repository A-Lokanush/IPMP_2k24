int rightMostSetBit(unsigned int n)
{
    return n & (n - 1);
}