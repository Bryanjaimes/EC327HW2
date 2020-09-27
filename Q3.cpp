#include <iostream>
#include <string>
using namespace std;

string dectohex(int);

int main()
{
    string s1, s2;
    int num1, num2, digits;
    int count = 0;

    cout << "Enter two non-negative integers: ";
    cin >> num1;
    cin >> num2;

    s1 = dectohex(num1);
    s2 = dectohex(num2);
    
    while (s1.length() != s2.length())
    {
        if (s1.length() < s2.length())
        {
            s1 = "0" + s1;
        }
        else 
        {
            s2 = "0" + s2;
        }
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
           count++;
        }
    }
    cout << "These numbers differ in " << count << " hex digits." << endl;

    return 0;
}

string dectohex(int num)
{
    string s = "";
    int rem;
    while(num > 0)
    {
        rem = num % 16;
        if (rem > 9)
        {
            switch (rem)
            {
            case 10: s = "A" + s; break;
            case 11: s = "B" + s; break;
            case 12: s = "C" + s; break;
            case 13: s = "D" + s; break;
            case 14: s = "E" + s; break;
            case 15: s = "F" + s; break;
            }
        }
        else 
        {
            s = char(rem + 48) + s; // Converts int (0-9) to ASCII code
        }
        num = num/16;
    }
    return s;
}