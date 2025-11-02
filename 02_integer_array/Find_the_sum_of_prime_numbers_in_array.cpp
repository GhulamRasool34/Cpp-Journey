#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    const int size = 7;
    int arr[size], sum = 0;

    cout << "Enter 7 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
        if (isPrime(arr[i]))
            sum += arr[i];

    cout << "Sum of prime numbers = " << sum;
    return 0;
}