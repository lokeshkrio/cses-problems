#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;
    int best(1), curr(1);

    for (int i = 1; i < (int)n.size(); i++)
    {

        if (n[i] == n[i - 1])
        {
            curr++;
            best = max(best, curr);
        }
        else
        {
            curr = 1;
        }
    }

    cout << best << "\n";
    return 0;
}