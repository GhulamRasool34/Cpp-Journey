#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size], num, count = 0;

    cout << "Enter five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to check frequency" << endl;
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            count++;
    }
    cout << "Frequency of " << num << ": " << count << endl;

    return 0;
}
