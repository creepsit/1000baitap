#include<iostream>
#include<iomanip>
using namespace std;
void show(float a, float b) 
{
    float diemtrungbinh=(a + b) / 2.0;
    cout << diemtrungbinh;
}
int main()
{
    float diemToan, diemVan;
    string hoten;
    cout << "Ho va ten cua ban la: "; getline(cin, hoten); cout << endl;
    cout << "Diem Toan cua ban: ";    cin >> diemToan; cout << endl;
    cout << "Diem Van cua ban: ";    cin >> diemVan; cout << endl;
    cout <<fixed<<setprecision(2)<<"Diem Trung Binh cua "<<hoten<<" la: ";
    show(diemToan, diemVan);
    return 0;
}