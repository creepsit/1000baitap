#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int sochuso(int n) // Tính số chữ số
{
    int count = 0;
    for (int i = 0;; i++)
    {
        if (n >= 1)
        {
            n /= 10;
            count += 1;
        }
        else
        {
            break;
        }
    }
    return count;
}
int TONGcacchuso(int n) 
{
    int k = sochuso(n);
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        int dem1 = n / pow(10, k - i);
        sum += pow(dem1, k);
        n = n - dem1 * pow(10, k - i);
    }
    return sum;
}
int main()
{   
    int a;
    cout << "Nhap a: "; cin >> a;
    cout << "Cac so Amstrong nho hon " << a << " la: ";
    for(int i=1; i<a; i++)
     
     if (TONGcacchuso(i) == i)
    {
        cout << i << " ";
    }
    return 0;
}