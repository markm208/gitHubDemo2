#include <iostream>

using namespace std;

void power(int base, int exponent);

int main()
{
    power(2, 3);
    power(2, 10);
    power(2, 20);

	return 0;
}
//--
void power(int base, int exponent)
{
    int retVal = 1;

    for(int i = 0;i < exponent;i++)
    {
        retVal = retVal * base;
    }
    cout<<retVal<<endl;
}
