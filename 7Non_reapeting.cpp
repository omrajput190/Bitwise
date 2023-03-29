
#include <iostream>
using namespace std;



// Driver code
int main()
{
    int arr[7]={1,2,8,2,4,4,1};
    int n=0;
    for(int i=0;i<7;i++)
    {
        n^=arr[i];
    }
    cout<<"Non reaapeting element is: "<<n;

	return 0;
}
