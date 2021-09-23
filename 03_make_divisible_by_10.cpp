#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t, ops;
    cin >> t;
    while (t--)
    {
        int n, units;
        cin >> n;
        units = n % 10;

        if (units == 0)
            cout << 0 << endl;
        else if (units == 5)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
  }