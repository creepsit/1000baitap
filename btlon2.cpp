#include <iostream>
#include<cmath>
#include <string>
using namespace std;

bool isNumber(char c)
{
    return c >= '0' && c <= '9';
}
int quetso(string s, int pos)
{
    int len = s.length();
    if (pos < 0 || pos > len)
    {
        return -1; // invalid pos
    }
    else
    {
        int value = 0;
        for (int i = pos + 1; i < len; i++)
        {
            if (isNumber(s[i]))
            {
                value = value * 10 + (s[i] - '0');
                //cout << s[i] - '0';
            }
            else
            {
                break;
            }
        }
        return value;
    }
}
double distance(string str, int len)
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (!isNumber(str[i]))
        {
            switch (str[i])
            {
            case 'R':
                x1 += quetso(str, i);
                break;
            case 'L':
                x2 += quetso(str, i);
                break;
            case 'U':
                y1 += quetso(str, i);
                break;
            case 'D':
                y2 += quetso(str, i);
                break;
            }
        }
    }
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
bool isPrime(int n)
{
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;

}
bool isSquared(int n)
{
	for (int i = 1; i <= n; i++) {
		if (i * i == n) {
			return true;
		}
	}
	return false;

}
int main()
{
    string moves;
    cin >> moves;
    int len = moves.length();
    int S=round(distance(moves, len));
    //-------------------------------------------------------------------------------------------
    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
        << S << '\n';
    if (isPrime(S)) {
        cout << "So " << S<< " la so nguyen to\n";
    }
    if (isSquared(S)) {
        cout << "So " << S<< " la so chinh phuong\n";
    }

    return 0;
}