#include<iostream>
#include<iomanip>
using namespace std;
void show(int n) 
{
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum;
    
}
int main()
{
    int n;
    cout << "Nhap n: " ; cin >> n; cout << endl;
    cout << "Tong tu 1 den "<< n << " la: ";
    show(n);
    
    return 0;
}