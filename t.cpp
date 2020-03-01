#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;


int main ()
{
    int n;

    while ( scanf ("%d", &n) && n ) {
        int a [10000 + 10];

        for ( int i = 0; i < n; i++ ) scanf ("%d", &a [i]);
        a [n] = a [0];
        a [n + 1] = a [1];

        bool down_ward = false;
        bool up_ward = false;

        if ( a [0] < a [1] ) up_ward = true;
        else down_ward = true;

        int peak = 1;

        for ( int i = 2; i <= n; i++ ) {
            if ( up_ward && a [i - 1] > a [i] ) {
                peak++;
                up_ward = false;
                down_ward = true;
            }
            else if ( down_ward && a [i - 1] < a [i]) {
                peak++;
                up_ward = true;
                down_ward = false;
            }
        }

        if ( up_ward && a [n] < a [n + 1] ) peak--;
        else if ( down_ward && a [n] > a [n + 1] ) peak--;

        printf ("%d\n", peak);
    }

	return 0;
}
