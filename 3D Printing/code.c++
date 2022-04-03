#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    int j = 1;
    while (t--)
    {
        int a1[4];
        int a2[4];
        int a3[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a1[i];
        }

        for (int j = 0; j < 4; j++)
        {
            cin >> a2[j];
        }

        for (int k = 0; k < 4; k++)
        {
            cin >> a3[k];
        }

        int s = min(a1[0], min(a2[0], a3[0]));
        int s1 = min(a1[1], min(a2[1], a3[1]));
        int s2 = min(a1[2], min(a2[2], a3[2]));
        int s3 = min(a1[3], min(a2[3], a3[3]));
        int sum = s + s1 + s2 + s3;
        int sum1 = 1000000;
        if (sum == sum1)
        {
            cout << "case #" << j << ": " << s << " " << s1 << " " << s2 << " " << s3 << endl;
            j++;
        }
        else if (sum < sum1)
        {
            cout << "case #" << j << ": "
                 << "IMPOSSIBLE" << endl;
            j++;
        }
        else
        {
            cout << "Case #" << j << ": " << s << " ";
            if ((s + s1) <= 1000000)
            {
                cout << s1 << " ";
                if (s + s1 + s2 <= 1000000)
                {
                    cout << s2 << " ";

                    cout << s3 - (sum - 1000000) << endl;
                }
                else
                    cout << s2 - (s + s1 + s2 - 1000000) << " " << 0 << endl;
            }
            else
            {
                cout << s1 - (s + s1 - 1000000) << " " << 0 << " " << 0 << endl;
            }
            j++;
        }
    }
    return 0;
}