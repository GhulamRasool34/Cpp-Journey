#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {0};

    cout << "Enter the five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int even = 0, odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}
