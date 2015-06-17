#include <iostream>
using namespace std;

int convert(int n, int m){
    int counter = 0;
    for (; n != 0, m != 0; n = n >> 1, m = m >> 1) {
        int n_digit = n & 1;
        int m_digit = m & 1;
        if (n_digit != m_digit) {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int r = 7, q = 8;
    cout<<convert(r, q);
    return 0;
}