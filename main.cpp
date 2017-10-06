#include <iostream>

using namespace std;

void power(float base, int exponent);

int main()
{
    power(2.0, 3);
    power(2.5, 10);
    power(2.0, 20);

	return 0;
}
//--
void power(float base, int exponent)
{
    int retVal = 1;

    for(int i = 0;i < exponent;i++)
    {
        retVal = retVal * base;
    }
    cout<<retVal<<endl;
}
