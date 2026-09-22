#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        n /= 5;
        count += n;
    }

    cout << count << "\n";
    return 0;
}