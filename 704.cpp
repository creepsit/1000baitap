#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int sochan(int n)
{
    int i = 1000;
    int sum = 0;
    if (i == 1000)
        return 0;
    if (n % 2 == 0)
    {
        return n + sochan(n+1);
    }
    else
    {
        return sochan(n+1);
    }
}
int main()
{
    int array[1000];
    int n;
    cout << "Nhap so phan  ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    cout << "Cac so chan trong mang la: ";
    sochan(array[1000]);
    cout << array[3];
    return 0;
}