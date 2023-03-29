

#include <iostream>
using namespace std;

	


// Driver code
int main()
{
int n;
cin>>n;

	if(n&&!(n&(n-1)))
    {
        cout<<"Yes it is a power of 2"<<endl;
    }
    else{
        cout<<"No it is a power of 2"<<endl;

    }

	return 0;
}
