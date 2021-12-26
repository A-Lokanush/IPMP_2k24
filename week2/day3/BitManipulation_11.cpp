#include <iostream>
#include<math.h>

using namespace std;

int posSetBit(int n)
{   
    int pos = 0;
    if (ceil(log2(n)) == floor(log2(n)))
    {
        while(n>1)
        {
            n = n/2;
            pos++;
        }
        return pos;
    }
    else
    {
        return -1;
    }
}
int main(){
    cout<<posSetBit(8)<<endl;
    cout<<posSetBit(9)<<endl;
    cout<<posSetBit(12)<<endl;
    cout<<posSetBit(16)<<endl;
}