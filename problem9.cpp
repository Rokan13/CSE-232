#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, count = 0;
    cin >> n;
    while(n!=0)
    {
        if(d = n%10)
        {
           count++;

        }
        n /=10;
    }
    cout << count;
}
