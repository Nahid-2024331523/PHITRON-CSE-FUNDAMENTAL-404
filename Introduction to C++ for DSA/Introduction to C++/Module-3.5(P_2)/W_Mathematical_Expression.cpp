#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x, ans;
    char c, ch;
    cin >> n >> c >> m >> ch >> x;
    if(c == '+') ans = n + m;
    else if(c == '-') ans = n - m;
    else ans = n * m;
    if(ans == x)
        cout << "Yes";
    else
        cout << ans;
    return 0;
}