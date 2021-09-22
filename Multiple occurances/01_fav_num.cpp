#include <iostream>
using namespace std;

// This function will return the multiple occurances of the single digit target integer in the number.
int getCount(int num, int target)
{   
    int rem, count = 0;
    while(num != 0)
    {
        rem = num % 10;
        if (rem == target)
            ++count;
        num /= 10;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, target; 
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << getCount(x, target) << "\n";
    }
}