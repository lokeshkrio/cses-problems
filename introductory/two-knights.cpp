#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, i(1);
    cin >> k;
    while (i <= k)
    {

        if (i <= 1)
        {
            cout << 0;
        }
        if (i > 1)
        {
            cout << (long long)((i * i * (i * i - 1)) / 2 - (4 * (i - 1) * (i - 2)));
        }
        cout << "\n";
        i++;
    }

    return 0;
}