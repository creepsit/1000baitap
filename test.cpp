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
int main()
{
    string moves;
    cin >> moves;
    int len = moves.length();
    cout<<round(distance(moves, len));

    return 0;
}