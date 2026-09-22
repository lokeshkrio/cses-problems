#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long solve(long long a, long long b)
{
    if (b == 0)
        return 1;

    long long half = solve(a, b / 2);

    half = (half * half) % MOD;

    if (b % 2 == 1)
        half = (half * a) % MOD;

    return half;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << solve(2, n) << "\n";

    return 0;
}