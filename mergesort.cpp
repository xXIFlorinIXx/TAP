#include <iostream>
using namespace std;

void merge_sort(int L, int R, int v[])
{
    if (L >= R)
        return;

    int mij = (L + R) / 2;

    merge_sort(L, mij, v);
    merge_sort(mij + 1, R, v);

    int vL[mij - L + 1] = {}, vR[R - mij] = {};

    for (int i = 0; i <= mij - L + 1; i++)
        vL[i] = v[L + i];
    for (int i = 0; i <= R - mij; i++)
        vR[i] = v[mij + 1 + i];

    int i = 0, j = 0, k = L;

    while (i < mij - L + 1 && j < R - mij)
        if (vL[i] < vR[j])
            v[k++] = vL[i++];
        else
            v[k++] = vR[j++];

    while (i < mij - L + 1)
        v[k++] = vL[i++];
    while (j < R - mij)
        v[k++] = vR[j++];
}

int v[100];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    merge_sort(0, n - 1, v);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    return 0;
}