#include<bits/stdc++.h>
using namespace std;

double arr[10000005];

void generate()
{
    int i;

    arr[1] = log10(1);

    for(i = 2; i <= 10000005; i++)
    {
        arr[i] = arr[i - 1] + log10(i);
    }
}
int main()
{
    generate();

    int t, n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        cout << (int)arr[n] + 1 << endl;
    }
}
