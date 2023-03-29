// C++ program to check for even or odd
// using Bitwise XOR operator

#include <bits/stdc++.h>
using namespace std;


// Driver code
int main()
{
	int n;
    cin>>n;
    int c=0;
    // TRADITIONAL METHOD
    // while(n)
    // {
    //     int set=n%2;
    //     if(set)
    //     {
    //         c++;
    //     }
    //     n=n/2;
    // }
    // ADVANCE METHOD
    while(n)
    {
        if(n&1)
        {
            c++;  
             
        }
        n=n>>1;
    }
     string  s="omkar";
    string sub = s.substr(s.length()-3, 3);
    cout<<"No of set Bit : "<<sub<<endl;
	return 0;
}
