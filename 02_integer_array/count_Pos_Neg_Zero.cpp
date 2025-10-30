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

    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }
    cout << "Positive count: " << pos << endl;
    cout << "Negative count: " << neg << endl;
    cout << "Zero count: " << zero << endl;

    return 0;
}