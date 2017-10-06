#include <iostream>

using namespace std;

float power(float base, int exponent);

int main()
{
	cout << fixed;
	cout << power(2, 3) << endl;
	cout << power(2, 10) << endl;
	cout << power(2, 20) << endl;

	return 0;
}
//--
float power(float base, int exponent)
{
    int retVal = 1;

    for(int i = 0;i < exponent;i++)
    {
        retVal = retVal * base;
    }
    return retVal;
}
