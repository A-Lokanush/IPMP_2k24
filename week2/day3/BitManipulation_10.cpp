unsigned int swapBits(unsigned int x)
{
    for (int i = 0; i < 32; i++)
    {
        int i_0 = x >> i & 1;
        int i_1 = x >> (i + 1) & 1;
        x = x - (i_0 << i) - (i_1 << i + 1) + (i_0 << (i + 1)) + (i_1 << i);
    }
    return x;
}