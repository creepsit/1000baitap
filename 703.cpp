#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int giaithua(int n)
{
    if (n > 0)
    {
        if (n == 1)
            return 1;
        return n * giaithua(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout<<'\n' << n <<"!= " << giaithua(n);
    return 0;
}