#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {0};
    int sum = 0;

    cout << "Enter the five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Average: " << sum/size << endl;
    

    return 0;
}
