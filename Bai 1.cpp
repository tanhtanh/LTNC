#include<iostream>
#include<cmath>
using namespace std;

bool checkQueen (int x1,int y1,int x2,int y2)
{
    if (x1==x2) return true;
    if (y1==y2) return true;
    if (abs(x1-x2)==abs(y1-y2)) return true;
    return false;
}

int main ()
{
    int n;
    cin >>n;
    int a[n][2];
    for (int i=0;i<n;i++)
    {
        cin >>a[i][0]>>a[i][1];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(checkQueen(a[i][0],a[i][1],a[j][0],a[j][1])==true)
            {
                cout<<"yes";
                return -1;
            }
        }
    }
    cout<<"no";
    return 0;
}
