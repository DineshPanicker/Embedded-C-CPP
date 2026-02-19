#include <iostream>
#include <vector>

using namespace std;
bool isMonotonic(vector<int> &arr)
{
    int N = arr.size();
    bool inc = true;
    bool dec = true;

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            inc = false;
        }
        if (arr[i] < arr[i + 1])
        {
            dec = false;
        }
    }
    return inc || dec;
}

int main()
{
    vector<int> arr1 = {1, 5, 2};
    vector<int> arr2 = {1, 3, 5};
    vector<int> arr3 = {5, 2, 1};
    // Function call
    bool ans1 = isMonotonic(arr1);
    if (ans1)
        cout << "arr1 is monotonic" << endl;
    else
        cout << "arr1 is not monotonic" << endl;

    bool ans2 = isMonotonic(arr2);
    if (ans2)
        cout << "arr2 is monotonic" << endl;
    else
        cout << "arr2 is not monotonic" << endl;

    bool ans3 = isMonotonic(arr3);
    if (ans3)
        cout << "arr3 is monotonic" << endl;
    else
        cout << "arr3 is not monotonic" << endl;

    return 0;
}
