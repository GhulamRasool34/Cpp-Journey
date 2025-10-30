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

    int key = 0;
    cout << "Enter the key: ";
    cin >> key;
    bool f = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            f = 1;
    }
    if (f)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}