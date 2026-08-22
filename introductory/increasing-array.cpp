#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<long long> a;
    long long step = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            step += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << step << "\n";

    return 0;
}