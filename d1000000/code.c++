#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    int j = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 1, x = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x + 1)
                x++;
        }
        cout << "case #" << j << ": " << x << endl;
        j++;
    }
    return 0;
}