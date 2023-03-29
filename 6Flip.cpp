#include <iostream>
using namespace std;

// Driver code
int main()
{
    int a = 15;
    int b = 8;
    int n = a ^ b;
    int c = 0;
    while (n)
    {
        if (n & 1)
        {
            c++;
        }
        n = n >> 1;
    }
    cout << c;

    return 0;
}
