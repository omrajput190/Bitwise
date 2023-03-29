// C++ program to check for even or odd
// using Bitwise XOR operator

#include <iostream>
using namespace std;

// Returns true if n is even, else odd

// Driver code
int main()
{
    long long int n;
    cin>>n; 
	if(n&1)
    {
        cout<<"ODD"<<endl;
    }
    else{
        cout<<"EVEN"<<endl;
    }

	return 0;
}
