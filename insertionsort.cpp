#include <iostream>
using namespace std;

void insertion_sort(int v[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = v[i], j = i - 1;
        while (v[j] > key && j >= 0)
            v[j + 1] = v[j], j--;
        v[j + 1] = key;
    }
}

int v[101], n;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    insertion_sort(v, n);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    return 0;
}