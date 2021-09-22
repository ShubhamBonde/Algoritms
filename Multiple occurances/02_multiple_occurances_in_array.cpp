#include <iostream>
using namespace std;

int get_occurance(int array[], int length, int target)
{
    int possible_match, count = 0;
    for (int i = 0; i < length; i++)
    {
        possible_match = array[i];
        if (possible_match == target)
            count++;
    }
    return count;
}

int main()
{
    int arr[] = {1,2,4,1,3,41,1,24,51,14,61,1,62,1,32,11,1,21,1,56};
    int length = sizeof(arr) / sizeof(arr[0]);
    // cout << length << endl;
    cout << get_occurance(arr, length, 1) << endl;
}

// complexity : O(n)