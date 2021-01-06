#include <iostream>
using namespace std;
int main()
{
    int thang;
    string Q1 = "Quy 1!", Q2 = "Quy 2!", Q3 = "Quy 3!", Q4 = "Quy 4!";
    cin >> thang;
    if (thang >= 1 && thang <= 3)
    {
        cout << Q1;
    }
    if (thang >= 4 && thang <= 6)
    {
        cout << Q2;
    }
    if (thang >= 7 && thang <= 9)
    {
        cout << Q3;
    }
    if (thang >= 10 && thang <= 12)
    {
        cout << Q4;
    }
    return 0;
}