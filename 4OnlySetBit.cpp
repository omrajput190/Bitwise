
#include <iostream>
using namespace std;




int main()
{
	// Find the only set bit in number
    int n=4;
    int c=0;
    while(n)
    { 
        ++c;
        if(n&1)
        {
            n=n>>1;
            break;
        }
        n=n>>1;
    }
    if(!n)
    {
        cout<<"First set find after"<<c<<"count";
    }
    else
    {
    cout<<-1;
    }

	return 0;
}
