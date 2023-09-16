// Binary Numbers
// binary format of odd number has 1 in end
/*
           AND(&)   OR(|)    XOR(^)
0    0   |   0  |   0    |    0
0    1   |   0  |   1    |    1
1    0   |   0  |   1    |    1
1    1   |   1  |   1    |    0


NOT(!) -  1->0
          0->1

Left Shift(<<)
Right Shift(>>)

3 << 2 means 3 ki binary ko 2 left shift kar do
3 >> 1 means 3 ki binary ko 1 right shift kar do

1 << n is 2 to the power n
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<INT_MAX<<endl;
    int a = (1LL << 31) - 1;
    cout<<a<<endl;
    unsigned int b = (1LL<<32)-1;
    cout<<b<<endl;

}