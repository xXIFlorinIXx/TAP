#include <iostream>
using namespace std;

int fr[1001], CA[1001],Sort[1001];
void countin_sort(int v[], int n)
{
    int minim = v[0], maxim = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < minim)
            minim = v[i];
        if (v[i] > maxim)
            maxim = v[i];
        fr[v[i]]++;
    }

    CA[minim] = fr[minim];
    for (int i = minim + 1; i <= maxim; i++)
        CA[i] = CA[i - 1] + fr[i];

    for (int i = 0; i < n; i++)
        Sort[--CA[v[i]]] = v[i];

    for(int i = 0; i < n; i++)
        v[i] = Sort[i];
}

int v[101], n;

int main()
{
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    countin_sort(v, n);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    return 0;
}