#include <iostream>
using namespace std;

int main()
{
    const int size1 = 3, size2 = 3;
    int arr1[size1], arr2[size2], merged[size1 + size2];

    cout << "Enter three elements for first array" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter three elements for second array" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < size1; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];

    cout << "Merged array:" << endl;
    for (int i = 0; i < size1 + size2; i++)
        cout << merged[i] << " ";

    return 0;
}
