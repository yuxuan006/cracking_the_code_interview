#include <iostream>
using namespace std;

int swap_odd_even_bits(int n){
    int even = n & 0xaaaaaaaa;
    int odd = n & 0x55555555;
    even >>= 1;
    odd <<= 1;
    return even | odd;
}
int main()
{
    int q = 8;
    cout<<swap_odd_even_bits(q);
    return 0;
}