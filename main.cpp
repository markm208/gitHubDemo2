#include <iostream>

using namespace std;

int power(int base, int exponent);

int main()
{
    cout<<power(2, 3)<<endl;
    cout<<power(2, 10)<<endl;
    cout<<power(2, 20)<<endl;

	return 0;
}
//--
 int power(int base, int exponent)
{
    int retVal = 1;

    for(int i = 0;i < exponent;i++)
    {
        retVal = retVal * base;
    }
    return retVal;
}
