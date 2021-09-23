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

        switch(units)
		{
			case(0):
				cout << 0 << endl;
				break;
			case(5):
				cout << 1 << endl;
				break;
			default:
				cout << -1 << endl;
		}
		
    }
    return 0;
  }
