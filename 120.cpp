#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void show(int n)
{   
    int count = 0;
    for(int i=1; i<int(sqrt(n)); i++) {
        cout << pow(i, 2) << " ";
        count++;
    }
    cout << endl;
    cout << "Co tong cong: " << count << " so chinh phuong nho hon " << n;
}
int main()
{
    int n;
    cout <<  "Nhap n: " ; 
    cin >> n;
    cout << "Cac so chinh phuong nho hon n la: ";
    show(n);
    return 0;
}