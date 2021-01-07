#include <iostream>
using namespace std;
int pow(int a, int n)
{
    if (n == 0)
        return 1;
    return a * pow(a, n - 1);
}
int convertBinaryToDecimal(string s)
{
    int Decimal = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {                           
        switch (s[i])
        {
        case '1':
            Decimal += pow(2, (s.length() - 1) - i);
            break;
        case '0':
            Decimal += 0;
            break;
        }
    }
    return Decimal;
}
int main()
{
    string n;
    cin >> n;
    cout << convertBinaryToDecimal(n);

    return 0;
}