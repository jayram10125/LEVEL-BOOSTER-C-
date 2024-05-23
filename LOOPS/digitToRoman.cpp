// convert digit into roman
#include <iostream>
using namespace std;
int main()
{
    int n, q, r;
    cout << "enter a number between 1 to 3999 : ";
    cin >> n;
    q = n / 1000;
    if (n >= 1000)
    {
        switch (q)
        {
        case 1:
            cout << "M";
            break;
        case 2:
            cout << "MM";
            break;
        case 3:
            cout << "MMM";
            break;
        default:
            cout << "number cant be grater then 3999 ";
            exit(0);
        }
    }
    n = n % 1000;
    if (n >= 100 && n < 1000)
    {
        q = n / 100;
        switch (q)
        {
        case 1:
            cout << "C";
            break;
        case 2:
            cout << "CC";
            break;
        case 3:
            cout << "CCC";
            break;
        case 4:
            cout << "CD";
            break;
        case 5:
            cout << "D";
            break;
        case 6:
            cout << "DC";
            break;
        case 7:
            cout << "DCC";
            break;
        case 8:
            cout << "DCCC";
            break;
        case 9:
            cout << "CM";
            break;
        default:
            break;
        }
    }
    n = n % 100;
    if (n >= 10 && n < 100)
    {
        q = n / 10;
        switch (q)
        {
        case 1:
            cout << "X";
            break;
        case 2:
            cout << "XX";
            break;
        case 3:
            cout << "XXX";
            break;
        case 4:
            cout << "XL";
            break;
        case 5:
            cout << "L";
            break;
        case 6:
            cout << "LX";
            break;
        case 7:
            cout << "LXX";
            break;
        case 8:
            cout << "LXXX";
            break;
        case 9:
            cout << "XC";
            break;
        default:
            break;
        }
    }
    n = n % 10;
    if (n > 0 && n < 10)
    {
        q = n;
        switch (q)
        {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        default:
            break;
        }
    }

    return 0;
}