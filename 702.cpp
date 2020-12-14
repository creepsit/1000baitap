#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << '\n' << "1 + 2 + ... + n = ";
    cout << sum(n);
    return 0;
}