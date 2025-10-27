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

    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    
    return 0;
}
