#include <iostream>
#include <vector>
using namespace std;

long long modular_power(long long x, long long y, long long p)
{
    long long res = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res % p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w;
    cin >> h >> w;
    vector<vector<char>> v(h, vector<char>(w));

    for (int i = 0; i < h; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < x.size(); j++)
        {
            v[i][j] = x[j];
        }
    }

    int top = -1, bottom = -1, left = -1, right = -1;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (v[i][j] == '#' && top == -1)
            {
                top = i;
            }
            if (v[i][j] == '#')
            {
                bottom = i;
            }
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (v[j][i] == '#' && left == -1)
            {
                left = i;
            }
            if (v[j][i] == '#')
            {
                right = i;
            }
        }
    }

    bool p = true;
    for (int i = top; i <= bottom; i++)
    {
        for (int j = left; j <= right; j++)
        {
            if (v[i][j] == '.')
            {
                p = false;
            }
        }
    }

    if (p)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
