#include <iostream>
using namespace std;

int main()
{
    const int size = 150;
    char str[size];

    cout << "Enter text" << endl;
    cin.getline(str, size);

    bool visited[size];
    for (int i = 0; i < size; i++)
        visited[i] = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (visited[i] || str[i] == ' ')
            continue;

        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << str[i] << ": " << count << endl;
    }

    return 0;
}