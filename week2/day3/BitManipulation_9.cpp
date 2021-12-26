#include <iostream>
#include <math.h>
using namespace std;

int positionOfRightMostSetBit(int a)
{
    return log2(a ^ a - 1) + 1;
}
int main()
{
    int n = 9;
    cout << positionOfRightMostSetBit(n);
    return 0;
}