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

    bool visited[size];

    for (int i = 0; i < size; i++)
        visited[i] = false;

    for (int i = 0; i < size; i++)
    {
        if (visited[i])
            continue;
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << "Frequency of " << arr[i] << ": " << count << endl;
    }

    return 0;
}