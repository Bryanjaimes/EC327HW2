#include <iostream>
using namespace std;

int main()
{
    int exponent;
    double num, mantissa;
    bool normalized = false;

    cout << "Enter a fractional number: ";
    cin >> num;
    exponent = 0;

    while(normalized == false)
    {
        if (num < 1 && num > 0)
        {
            num = num * 10;
            exponent--;
        }
        else if (num > 10 || num < -10)
        {
            num = num / 10;
            exponent++;
        }
        else 
        {
            mantissa = num;
            normalized = true;
        }
    }

    cout.precision(3);
    cout << "In normalized form:\nMantissa: " << fixed << mantissa << ", Exponent: " << exponent << endl;

    return 0;
}