#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void show(int x, int n) 
{
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(x , i);
    }
    cout << sum;
}
int main()
{
    int x, n;
    cout << "Nhap x: "<< endl;
    cin >> x;
    cout << "Nhap n: "<< endl;
    cin >> n;
    cout << "Tong S = "<<x<<" + "<<x<<"^2"<<" + "<<x<<"^3"<<" + ... + "<<x<<"^"<<n<<" = ";
    show(x, n);
    
    return 0;
}