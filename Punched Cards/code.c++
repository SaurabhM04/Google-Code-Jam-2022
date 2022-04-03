#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        int r,c; 
        cin>>r>>c;
        char a[2*r+1][2*c+1];
        for(int i=0;i<2*r+1;i++)
        {
            for(int j=0;j<2*c+1;j++)
            {
                if(i%2==0&&j%2==0)
                a[i][j]='+';
                else if(i%2==0&&j%2==1)
                a[i][j]='-';
                else if(i%2==1&&j%2==0)
                a[i][j]='|';
                else if(i%2==1&&j%2==1)
                a[i][j]='.';
            }
        }
        a[0][0]='.';
        a[0][1]='.';
        a[1][0]='.';
        a[1][1]='.';
        cout<<"Case #"<<i<<":"<<endl;
        i++;
        for(int i=0;i<2*r+1;i++)
        {
            for(int j=0;j<2*c+1;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return(0);
}