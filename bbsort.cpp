#include <iostream>
using namespace std;
int v[100];

void bsort (int n, int v[])
{
    bool ok = 0;
    while (!ok)
    {
        ok = 1;
        for (int i = 1; i < n; i++)
            if (v[i] > v[i + 1])
                ok = 0, swap(v[i], v[i + 1]);
        n--;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    bsort(n,v);
    for (int i = 1; i <= n; i++)
        cout << v[i] << ' ';
    return 0;
}