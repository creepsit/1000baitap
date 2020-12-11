#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void show(int n)
{
    int count = 0; //Đếm các số nguyên tố nhỏ hơn n
    for (int i = 2; i < n; i++)
    {
        for (int k = 2; i % k != 0;)
        {
            k++;
            if (k == i)
            {
                cout << i << " "; //in ra các số nguyên tố nhỏ hơn n
                count += 1;
                break;
            }
        }
    }
    cout << '\n'
         << "Tong: " << count + 1 << " so NT.";
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << endl;
    if (n > 2)
    {
        cout << "Cac So Nguyen To nho hon " << n << " la: " << endl;
        cout << "2 ";
        show(n);
    }
    else if (n == 2)
    {
        cout << "2 la so nguyen to nho nhat!";
    }
    cout << "Thanh dep trai";
    return 0;
}