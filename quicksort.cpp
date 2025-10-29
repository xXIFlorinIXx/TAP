#include <iostream>
using namespace std;

int v[100], n;

void QuickSort(int L, int R, int v[])
{
    if (L >= R)
        return;

    int m = (L + R) / 2;
    int aux = v[L];
    v[L] = v[m];
    v[m] = aux;
    int i = L, j = R, d = 0;
    while (i < j)
    {
        if (v[i] > v[j])
        {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            d = 1 - d;
        }
        i += d;
        j -= 1 - d;
    }
    QuickSort(L, i - 1,v);
    QuickSort(i + 1, R,v);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    QuickSort(0,n-1,v);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    return 0;
}