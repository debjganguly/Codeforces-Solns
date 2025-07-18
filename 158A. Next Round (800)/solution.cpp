#include <iostream>
using namespace std;

int main()
{
    // The value of n and k
    int n, k;
    cin >> n >> k;

    int arr[n];

    // The Values

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Logic
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= arr[k - 1] && arr[i] > 0)
        {
            count++;
        }
    }

    // Output

    cout << count;
}